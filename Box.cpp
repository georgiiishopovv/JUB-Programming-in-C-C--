/*
CH-230-A
a11_p1.[cpp]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <iostream>
#include <cstring> 
#include "Box.h"

using namespace std;

//default constructor
Box::Box()
{
    this->height = 0;
    this->width = 0;
    this->depth = 0;
}

Box::Box(double height, double width, double depth)
{
    this->height = height;
    this->width = width;
    this->depth = depth;
}

//copy constructor
Box::Box(const Box &newbox)
{
    this->height = newbox.height;
    this->width = newbox.width;
    this->depth = newbox.depth;
}

Box::~Box()
{

}

//setters
void Box::setHeight(double height)
{
    this->height = height;
}

void Box::setWidth(double width)
{
    this->width = width;
}

void Box::setDepth(double depth)
{
    this->depth = depth;
}

//getterrs
double Box::getHeight()
{
    return this->height;
}

double Box::getWidth()
{
    return this->width;
}

double Box::getDepth()
{
    return this->depth;
}