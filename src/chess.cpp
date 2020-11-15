#include <iostream>
#include "../include/chess.hpp"

piece::piece(uint8_t pieceType){
    x = 0;
    y = 0;
    type = pieceType;
}

piece::~piece(){}

void piece::setX(uint8_t newX){
    x = newX;
}

void piece::setY(uint8_t newY){
    y = newY;
}

uint8_t piece::getX(){
    return x;
}

uint8_t piece::getY(){
    return y;
}

uint8_t piece::getType(){
    return type;
}