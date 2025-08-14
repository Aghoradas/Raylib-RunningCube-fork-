#ifndef square_h
#define square_h
#include <raylib.h>

class Square
{
private:
    float x;
    float y;
    int width;
    int height;
    Color color;

public:
    Square(float squareX, float squareY, int squareWidth, int squareHeight, Color color);

    void movePlayer();

    bool mapCollisionDetection();

    void drawPlayer();
};

#endif
