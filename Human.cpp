#include "Human.h"
#include<iostream>
#include<string.h>
Human::Human() { name = "Human";};

Human::Human(std::string name1) { name = name1; };

Move* Human::makeMove(){
    Move* move;
    std::string input;
    std::cout<<"Enter move:";
    std::cin>>input;
    Input checkInput;
    move=checkInput.Check(input);
    return move;
};

std::string Human::getName(){ return name;};