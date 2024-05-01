#include "Referee.h"
#include <string.h>
Referee::Referee(){};

Player* Referee::refGame(Player* player1, Player* player2) {
    Move* move1 = player1->makeMove();
    Move* move2 = player2->makeMove();
    Result checkResult;
    bool win1=checkResult.checkWin(move1,move2);
    bool win2=checkResult.checkWin(move2,move1);
    if(win1==true){
        return player1;
    }
    else if(win2==true){
        return player2;
    }
    else if((win1==false)&&(win2==false)){
        return nullptr;
    }
    return 0;
};



