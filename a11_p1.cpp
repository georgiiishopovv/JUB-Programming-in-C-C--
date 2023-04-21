/*
CH-230-A
a11_p1.[cpp]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <iostream>
#include <cstring> 

using namespace std;

class Box
{
    private:
        double height;
        double width;
        double depth;
    public:
        Box();
        Box(double, double, double);
        Box(const Box&);
        ~Box();
        void setHeight(double);
        void setWidth(double);
        void setDepth(double);
        double getHeight();
        double getWidth();
        double getDepth();
};

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

Box::Box(const Box &newbox)
{
    this->height = newbox.height;
    this->width = newbox.width;
    this->depth = newbox.depth;
}

Box::~Box()
{

}

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

//cin.get()
