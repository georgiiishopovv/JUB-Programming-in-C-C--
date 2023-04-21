/*
CH-230-A
a11_p5.[cpp]
Georgi Shopov
gshopov@jacobs-university.de
*/
 
// please refer to shapes.h for methods documentation
 
#include <iostream>
#include "Shapestest.h"
 
using namespace std; 
 
//empty constructor
Shape::Shape()
{
    this->name = "default_name";
}
 
Shape::Shape(const string& n) : name(n) {
}
 
//copy constructor
Shape::Shape(const Shape &s)
{
    this->name = s.name;
}
 
void Shape::printName() const {
    cout << name << endl;
}
 
//setter
void Shape::setName(string name)
{
    this->name = name;
}
 
//getter
string Shape::getName() const
{
    return this->name;
}
 
//////////////////////////////////////////////////////////////
 
//empty constructor
CenteredShape::CenteredShape()
{
    this->x = 0.0;
    this->y = 0.0;
}
 
CenteredShape::CenteredShape(const string& n, double nx, double ny) : Shape(n) {
    x = nx;
    y = ny;
}
 
//copy constructor
CenteredShape::CenteredShape(const CenteredShape &cs) : Shape(cs)
{
    this->x = cs.x;
    this->y = cs.y;
}
 
//setters
void CenteredShape::setX(double x)
{
    this->x = x;
}
 
void CenteredShape::setY(double y)
{
    this->y = y;
}
 
//getters
double CenteredShape::getX()
{
    return this->x;
}
 
double CenteredShape::getY()
{
    return this->y;
}
 
////////////////////////////////////////////////////////////
 
//empty constructor
RegularPolygon::RegularPolygon()
{
    this->EdgesNumber = 3;
}
 
RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
    CenteredShape(n,nx,ny) 
{
    EdgesNumber = nl;
}
 
//copy constructor
RegularPolygon::RegularPolygon(const RegularPolygon &rp) : 
    CenteredShape(rp)
{
    this->EdgesNumber = rp.EdgesNumber;
}
 
//setter
void RegularPolygon::setEdgesNumber(int EdgesNumber)
{
    this->EdgesNumber = EdgesNumber;
}
 
//getter
int RegularPolygon::getEdgesNumber()
{
    return this->EdgesNumber;
}
 
////////////////////////////////////////////////////////////
 
//empty constructor
Circle::Circle()
{
    this->Radius = 1.0;
}
 
Circle::Circle(const string& n, double nx, double ny, double r) : 
  CenteredShape(n,nx,ny) 
{
    Radius = r;
}
 
//copy constructor
Circle::Circle(const Circle &c) : CenteredShape(c)
{
    this->Radius = c.Radius;
}
 
//setter
void Circle::setRadius(double Radius)
{   
    this->Radius = Radius;
}
 
//getter
double Circle::getRadius()
{
    return this->Radius;
}
 
//calculate the perimeter
double Circle::perimeter()
{
    return 2*3.14*Radius;
}
 
//calculate the area
double Circle::area()
{
    return 3.14 * (Radius * Radius);
}
 
////////////////////////////////////////////////////////////
 
//emtpy constructor
Rectangle::Rectangle()
{
    this->height = 1.0;
    this->width = 2.0;
}
 
//specific inheritance constructor
Rectangle::Rectangle(const string& n, double nx, double ny, double nwidth,
                    double nheight) : RegularPolygon(n, nx, ny, 6)
{
    width = nwidth;
    height = nheight;
}
 
//copy constructor
Rectangle::Rectangle(const Rectangle &r) : 
    RegularPolygon(r)
{
    this->height = r.height;
    this->width = r.width;
}
 
//setters
void Rectangle::setHeight(double height)
{
    this->height = height;
}
 
void Rectangle::setWidth(double width)
{
    this->width = width;
}
 
//getters
double Rectangle::getHeight()
{
    return this->height;
}
 
double Rectangle::getWidth()
{
    return this->width;
}
 
//calculate the perimeter
double Rectangle::perimeter()
{
    return 2*height + 2*width;
}
 
//calculate the area
double Rectangle::area()
{
    return height * width; 
}
 
////////////////////////////////////////////////////////////
 
//empty constructor
Square::Square()
{
    this->side = 4;
}
 
//specific inheritance constructor
Square::Square(const string& n, double nx, double ny, double nside) : 
Rectangle(n, nx, ny, 1.0, 1.0)
{
    side = nside;
}
 
//copy constructor
Square::Square(const Square &s) : Rectangle(s)
{
    this->side = s.side;  
}
 
//setter
void Square::setSides(int side)
{
    this->side = side;
}
 
//getter
int Square::getSides()
{
    return this->side;
}
 
//calculate the perimeter
double Square::perimeter()
{
    return side * 4;
}
 
//calculate the area
double Square::area()
{
    return side * side;
}