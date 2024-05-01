#ifndef ROCK_H
#define ROCK_H

#include <vector>
#include <string>
#include "Move.h"

class Rock: public Move{
    public:
    std::string getName() override;
};

#endif
