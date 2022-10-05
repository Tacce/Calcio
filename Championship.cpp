//
// Created by Francesco Taccetti on 05/10/2022.
//

#include <algorithm>
#include "Team.h"
#include <iostream>
#include "Championship.h"

void Championship::setTeamNames(){
    teams.emplace_back("ATA");
    teams.emplace_back("FIO");
    teams.emplace_back("INT");
    teams.emplace_back("JUV");
    teams.emplace_back("LAZ");
    teams.emplace_back("MIL");
    teams.emplace_back("NAP");
    teams.emplace_back("ROM");
}

void Championship::group(){
    for(int i=0;i<teamNumber-1;i++){
        for(int j=i+1;j<teamNumber;j++)
            match(teams[i], teams[j]);
    }
}

void Championship::match(Team &A, Team &B){
    switch (rand()%3) {
        case 0:
            A.victory();
            B.defeat();
            break;
        case 1:
            A.draw();
            B.draw();
            break;
        case 2:
            A.defeat();
            B.victory();
            break;
    }
}

Championship::Championship(int nI, int tN):nationIndex(nI), teamNumber(tN) {
    if(nationIndex==1)
        setTeamNames();
}

void Championship::play() {
    group();
    Championship::orderPos();
    std::cout <<std::endl<< "GIRONE DI ANDATA" << std::endl;
    Championship::printScoreBoard();
    group();
    Championship::orderPos();
    std::cout << "GIRONE DI RITORNO" << std::endl;
    Championship::printScoreBoard();

}

void Championship::orderPos(){
    std::sort(teams.rbegin(),teams.rend());
}

void Championship::printScoreBoard(){
    std::cout << "     " << " v " << " p " << " s " << " Pt " << std::endl;
    for(auto & i : teams)
        std::cout << i.name << "   " << i.v << "  " << i.p << "  " << i.s << "  " << i.points << std::endl;
    std::cout<<std::endl;
}