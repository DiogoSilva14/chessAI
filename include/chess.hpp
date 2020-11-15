#include <stdint.h>

enum pieceTypes {
    king,
    queen,
    rook,
    bishop,
    knight,
    pawn
};

class piece{
    private:
        uint8_t x;
        uint8_t y;
        uint8_t type;
    public:
        piece(uint8_t);
        ~piece();
        void setX(uint8_t);
        void setY(uint8_t);
        uint8_t getX();
        uint8_t getY();
        uint8_t getType();
};