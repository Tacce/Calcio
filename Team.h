//
// Created by Francesco Taccetti on 16/03/2022.
//

#ifndef CALCIO_TEAM_H
#define CALCIO_TEAM_H
#include <string>
#include <vector>

class Team{
public:
    explicit
    Team(std::string n="---");
    void victory ();
    void defeat();
    void draw();

    bool operator<(const Team& T2) const;

    std::string name;
    int p=0;
    int points=0;
    int s=0;
    int v=0;
};


#endif //CALCIO_TEAM_H
