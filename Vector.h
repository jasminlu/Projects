#ifndef VECTOR_H
#define VECTOR_H
#include<iostream>
#include<vector>
#include<string>
class Vector{
    private:
    std::vector<std::vector<std::string>>moves{
        {"Rock","Scissors"},
        {"Scissors","Paper"},
        {"Paper","Rock"},
        {"Monkey","Ninja","Robot"},
        {"Robot","Ninja","Zombie"},
        {"Pirate","Robot","Monkey"},
        {"Ninja","Zombie","Pirate"},
        {"Zombie","Pirate","Monkey"}
        };
    public:
    Vector();
    std::vector<std::vector<std::string>>getVector();
};
#endif