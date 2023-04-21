/*
CH-230-A
a12_p1.[cpp]
Georgi Shopov
gshopov@jacobs-university.de
*/
 
// please refer to shapes.h for methods documentation
 
#include <iostream>
#include <math.h>
#include "Shapes.h"
 
using namespace std; 
 
Shape::Shape(const string& n) : name(n) {
}
 
void Shape::printName() const {
    cout << name << endl;
}
 
string Shape::getName()
{
    return this->name;
}
 
CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n) {
    x = nx;
    y = ny;
}
 
RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
    CenteredShape(n,nx,ny) 
{
    EdgesNumber = nl;
}   

int RegularPolygon::getEdgesNumber()
{
    return this->EdgesNumber;
}
 
Circle::Circle(const string& n, double nx, double ny, double r) : 
    CenteredShape(n,nx,ny) 
{
    Radius = r;
}
 
//parameterized constructor
Hexagon::Hexagon(const string name, double side, string color) :
     RegularPolygon(name, 0.0, 0.0, 6)
{
    this->side = side;
    this->color = color;
}
 
//copy constructor
Hexagon::Hexagon(const Hexagon &h) : 
    RegularPolygon(h)
{
    this->side = h.side;
    this->color = h.color;
}
 
//destructor
Hexagon::~Hexagon()
{
    
}
 
//getters and setters
void Hexagon::setColor(string color)
{
    this->color = color;
}
 
void Hexagon::setSide(double side)
{
    this->side = side;
}
 
string Hexagon::getColor()
{
    return this->color;
}
 
double Hexagon::getSide()
{
    return this->side;
}
 
//perimeter
double Hexagon::perimeter()
{
    return 6 * this->side;
}
 
//area
double Hexagon::area()
{
    return (3 * pow(3.0, 1/2.0) * pow(this->side, 2.0)) / 2;
}