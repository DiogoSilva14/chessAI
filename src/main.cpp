#include <iostream>
#include "../include/chess.hpp"

using namespace std;

int main(void){
    piece mypiece(pawn);
    cout << unsigned(mypiece.getType()) << "\n";
    return 0;
}