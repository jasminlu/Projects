#include "Input.h"
#include "Rock.h"
#include "Scissors.h"
#include "Paper.h"
#include "Monkey.h"
#include "Robot.h"
#include "Pirate.h"
#include "Ninja.h"
#include "Zombie.h"

Move* Input::Check(std::string move){
    if(move == "Rock"){
        return new Rock();
    }
    else if(move == "Scissors"){
        return new Scissors();
    }
    else if(move == "Paper"){
        return new Paper();
    }
    else if(move == "Monkey"){
        return new Monkey();
    }
    else if(move == "Robot"){
        return new Robot();
    }
    else if(move == "Pirate"){
        return new Pirate();
    }
    else if(move == "Ninja"){
        return new Ninja();
    }
    else if(move == "Zombie"){
        return new Zombie();
    }
    else {
        std::cout<< "Unknown move: " << move << std::endl;
        return nullptr;
    }
};
