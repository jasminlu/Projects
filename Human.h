#ifndef HUMAN_H
#define HUMAN_H
#include "Player.h"
#include "Move.h"
#include "Input.h"
#include<iostream>
#include<string.h>
class Human : public Player{
    private:
    std::string name;
    public:
    Human();
    Human(std::string name1);
    Move* makeMove() override;
    std::string getName() override;
};
#endif