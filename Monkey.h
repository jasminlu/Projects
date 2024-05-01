#ifndef MONKEY_H
#define MONKEY_H

#include <vector>
#include <string>
#include "Move.h"

class Monkey: public Move{
    public:
    std::string getName() override;
};

#endif