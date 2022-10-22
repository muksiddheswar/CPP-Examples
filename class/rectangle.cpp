
// Rectangle.cpp
#include "Rectangle.h"

// default constructor
Rectangle::Rectangle()
{
   width = 0;
   height = 0;
}

// constructor that takes arguments for width and height
Rectangle::Rectangle(int w, int h)
{
   width = w;
   height = h;
}

void Rectangle::setWidth(int w)
{
   width = w;
}

int Rectangle::getWidth()
{
   return width;
}

void Rectangle::setHeight(int h)
{
   height = h;
}

int Rectangle::getHeight()
{
   return height;
}

int Rectangle::area()
{
   return width * height;
}