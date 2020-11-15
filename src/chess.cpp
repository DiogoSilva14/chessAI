#include <iostream>
#include "../include/chess.hpp"

position::position(){}

position::~position(){}

piece::piece(uint8_t x,uint8_t y,uint8_t pieceType){
    pos.x = x;
    pos.y = y;
    type = pieceType;
}

piece::~piece(){}

void piece::setX(uint8_t newX){
    if(newX > 7){
        throw std::runtime_error("Invalid X pos");
    }else{
        pos.x = newX;
    }
}

void piece::setY(uint8_t newY){
    if(newY > 7){
        throw std::runtime_error("Invalid Y pos");
    }else{
        pos.y = newY;
    }
}

uint8_t piece::getX(){
    return pos.x;
}

uint8_t piece::getY(){
    return pos.y;
}

uint8_t piece::getType(){
    return type;
}

team::team(bool isBlack){
    uint8_t ypawn,yothers;
    if(isBlack){
        ypawn = 6;
        yothers = 7;
    }else{
        ypawn = 1;
        yothers = 0;
    }

    king = new piece(3,yothers,King);
    queen = new piece(4,yothers,Queen);
    rooks[0] = new piece(0,yothers,Rook);
    rooks[1] = new piece(7,yothers,Rook);
    knights[0] = new piece(1,yothers,Knight);
    knights[1] = new piece(6,yothers,Knight);
    bishops[0] = new piece(2,yothers,Bishop);
    bishops[1] = new piece(5,yothers,Bishop);
    pawns[0] = new piece(0,ypawn,Pawn);
    pawns[1] = new piece(1,ypawn,Pawn);
    pawns[2] = new piece(2,ypawn,Pawn);
    pawns[3] = new piece(3,ypawn,Pawn);
    pawns[4] = new piece(4,ypawn,Pawn);
    pawns[5] = new piece(5,ypawn,Pawn);
    pawns[6] = new piece(6,ypawn,Pawn);
    pawns[7] = new piece(7,ypawn,Pawn);
}

team::~team(){
    delete(king);
    delete(queen);
    delete(rooks);
    delete(knights);
    delete(bishops);
    delete(pawns);
}