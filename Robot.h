#ifndef ROBOT_H
#define ROBOT_H

#include <vector>
#include <string>
#include "Move.h"

class Robot: public Move{
    public:
    std::string getName() override;
};

#endif