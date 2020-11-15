#include <iostream>
#include "../include/chess.hpp"

using namespace std;

int main(void){
    team team1(black);
    cout << unsigned(team1.king->getX()) << "\n";
    return 0;
}