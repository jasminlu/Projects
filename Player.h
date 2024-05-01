#ifndef PLAYER_H
#define PLAYER_H
#include<iostream>
#include<string.h>
//abstract class because Human and Computer both have the same functions 
class Move;
class Player{
public:
virtual Move* makeMove()=0;

virtual std::string getName()=0;
};

#endif