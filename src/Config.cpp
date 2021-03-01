#include "Config.hpp"
#include "Loger.hpp"

#include <fstream>

void Config::importConfig(){
  Loger loger;
  bool array = false;
  bool size = false;
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
        //std::cout << varName << " ";
        //std::cout << value << std::endl;
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
        if (size && varName == "size"){
          if (arrayPlace == 1){
            width = std::stoi(value);
            arrayPlace++;
          }
          if (arrayPlace == 0){
            height = std::stoi(value);
            arrayPlace++;
          }
        }
        //std::cout << value << std::endl;
        value = "";
      }
    }
  } else {
    loger.log("!!Config.yaml not find!!");
  }
}
