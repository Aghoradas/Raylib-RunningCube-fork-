#include "square.h"

Square::Square(float squareX, float squareY, int squareWidth, int squareHeight, Color squareColor)
{
    x = squareX;
    y = squareY;
    width = squareWidth;
    height = squareHeight;
    color = squareColor;
}

void Square::movePlayer()
{
    if (IsKeyDown(KEY_UP))
    {
        y -= 2.0f;
    }
    if (IsKeyDown(KEY_DOWN))
    {
        y += 2.0f;
    }
    if (IsKeyDown(KEY_RIGHT))
    {
        x += 2.0f;
    }
    if (IsKeyDown(KEY_LEFT))
    {
        x -= 2.0f;
    }
}

void Square::drawPlayer()
{
    DrawRectangle(x, y, width, height, color);
}
