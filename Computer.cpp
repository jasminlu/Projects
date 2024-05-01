#include "Computer.h"

#include <string.h>

#include <iostream>
Move *Computer::makeMove(){
    static Rock rock;
    return &rock;
};

std::string Computer::getName() { return "Computer"; };