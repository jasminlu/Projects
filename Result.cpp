#include "Result.h"
bool Result::checkWin(Move* move1, Move* move2){
    Vector vector;
    std::vector<std::vector<std::string>> moves = vector.getVector();
    int row=-1;
    for(size_t i=0; i < (vector.getVector()).size(); i++){
        if(moves[i][0]==move1->getName()){
            row=i;
        }
    }
    for(size_t i=1; i < ((vector.getVector()))[row].size(); i++){
        if(moves[row][i]==move2->getName()){
            return true;
        }
    }
    return false;
}