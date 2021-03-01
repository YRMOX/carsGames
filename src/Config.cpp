#include "Config.hpp"
#include "Loger.hpp"

#include <fstream>

void Config::importConfig(){
  Loger loger;
  bool array = false;
  bool size = false;
  bool na6a = false;
  bool b6zers = false;
  std::string line;
  int arrayPlace = 0;
  std::string varName;
  std::string value;
  std::ifstream file;
  file.open("Config.yaml");
  if (file.is_open()){
    while (std::getline(file, line)){
      int i = 0;
      while (line[i] == ' '){
        i++;
      }
      if (!array || line[i] != '-'){
        varName = "";
        while (line[i] != ':' && i < line.length()){
          varName += line[i];
          i++;
        }
        i++;
        while (line[i] == ' '){
          i++;
        }
        if (i == line.length()){
          array = true;
        } else {
          array = false;
        }
        while (i < line.length()){
          value += line[i];
          i++;
        }
        if (varName == "name"){
          name = value;
        }
        if (varName == "fullScreen"){
          if (value == "true"){
            fullScreen = true;
          } else {
            fullScreen = false;
          }
        }
        if (varName == "frameRateLimit"){
          frameRateLimit = std::stoi(value);
        }
        value = "";
      } else {
        i += 2;
        while (i < line.length()){
          value += line[i];
          i++;
        }
        if (varName == "size"){
          size = true;
        }
        if (varName == "NA6A"){
          na6a = true;
        }
        if (varName == "B6ZERS"){
          b6zers = true;
        }
        if (size && varName == "size"){
          if (arrayPlace == 0){
            height = std::stoi(value);
            arrayPlace++;
            size = false;
          }else if (arrayPlace == 1){
            width = std::stoi(value);
            arrayPlace = 0;
          }
        }
        if (na6a && varName == "NA6A"){
          NA6A[arrayPlace] = std::stof(value);
          if (arrayPlace == 6){
            na6a = false;
            arrayPlace = 0;
          } else {
            arrayPlace++;
          }
        }
        if (b6zers && varName == "B6ZERS"){
          B6ZERS[arrayPlace] = std::stof(value);
          if (arrayPlace == 6){
            arrayPlace = 0;
            b6zers = false;
          } else {
            arrayPlace++;
          }
        }
        value = "";
      }
    }
  } else {
    loger.log("!!Config.yaml not find!!");
  }
}
