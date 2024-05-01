#ifndef COMPUTER_H
#define COMPUTER_H
#include <iostream>
#include <string.h>
#include "Rock.h"
#include "Player.h"
class Computer : public Player{
public:
  Move *makeMove() override;
  std::string getName() override;
};
#endif