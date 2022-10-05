//
// Created by Francesco Taccetti on 16/03/2022.
//
#include "Team.h"
#include <algorithm>

Team::Team(std::string n): name(std::move(n)) {}

void Team::victory() {
    v++;
    points+=3;
}

void Team::defeat() {
    s++;
}

void Team::draw() {
    p++;
    points+=1;
}

bool Team::operator<(const Team& T2) const {
    if(points < T2.points || (points == T2.points && v < T2.v))
        return true;
    else return false;
}

