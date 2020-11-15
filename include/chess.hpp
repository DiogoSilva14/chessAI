#include <stdint.h>

enum teams{
    white,
    black
};

enum pieceTypes{
    King,
    Queen,
    Rook,
    Bishop,
    Knight,
    Pawn
};

class position{
    public:
        uint8_t x;
        uint8_t y;
        position();
        ~position();
};

class piece{
    private:
        position pos;
        uint8_t type;
    public:
        piece(uint8_t,uint8_t,uint8_t);
        ~piece();
        void setX(uint8_t);
        void setY(uint8_t);
        uint8_t getX();
        uint8_t getY();
        uint8_t getType();
};

class team{
    public:
        piece* king;
        piece* queen;
        piece* rooks[2];
        piece* knights[2];
        piece* bishops[2];
        piece* pawns[8];
        team(bool);
        ~team();
};