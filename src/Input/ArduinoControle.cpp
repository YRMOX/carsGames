#include "ArduinoControle.hpp"

ArduinoControle::ArduinoControle(){
  serialPort.Open("/dev/ttyACM0");
  serialPort.SetBaudRate(LibSerial::BaudRate::BAUD_9600);
}

ArduinoControle::~ArduinoControle(){
  serialPort.Close();
}

void ArduinoControle::carControle(Car &car){
  //analogVertical
  serialPort.ReadByte(tempChar);
  if (tempChar == 'V'){
    while (tempChar != '\n'){
      serialPort.ReadByte(tempChar);
      value += tempChar;
    }
    analogVerticalValue = stoi(value);
    value = "";
  }

  //analogHorizontal
  serialPort.ReadByte(tempChar);
  if (tempChar == 'H'){
    while (tempChar != '\n'){
      serialPort.ReadByte(tempChar);
      value += tempChar;
    }
    analogHorizontalValue = stoi(value);
    value = "";
  }

  //clutch
  serialPort.ReadByte(tempChar);
  if (tempChar == 'C'){
    while (tempChar != '\n'){
      serialPort.ReadByte(tempChar);
      value += tempChar;
    }
    clutchValue = stoi(value);
    value = "";
  }
  loger.clear();
  loger.log(analogVerticalValue);
}
