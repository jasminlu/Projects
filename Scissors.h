#ifndef SCISSORS_H
#define SCISSORS_H
#include "Move.h"
#include<vector>
#include<string>
class Scissors: public Move{
    public:
    std::string getName() override;
};
#endif