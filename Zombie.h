#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <vector>
#include <string>
#include "Move.h"

class Zombie: public Move{
    public:
    std::string getName() override;
};

#endif