#include <iostream>
#include "Team.h"
#include "Championship.h"
#include <ctime>
#include <vector>
#include <memory>

int main() {
    srand(time(0));
    int n;
    do {
        std::unique_ptr<Championship>championship =std::make_unique<Championship>();
        championship->play();
        std::cout<<std::endl<<"-NUOVA SIMULAZIONE? SI[1] NO[0]"<<std::endl;
        std::cin>>n;
    }while(n);

    return 0;
}
