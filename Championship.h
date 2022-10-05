//
// Created by Francesco Taccetti on 05/10/2022.
//

#ifndef CALCIO_CHAMPIONSHIP_H
#define CALCIO_CHAMPIONSHIP_H

#include <string>
#include <vector>
#include "Team.h"

class Championship {
public:
    explicit Championship(int nI=1,int tN=8);
    void play();

private:
    void setTeamNames();
    void group();
    void match(Team &A, Team &B);
    void orderPos();
    void printScoreBoard();

    std::vector<Team> teams;
    int teamNumber;
    int nationIndex;

};


#endif //CALCIO_CHAMPIONSHIP_H
