/*
CH-230-A
a11_p5.[cpp]
Georgi Shopov
gshopov@jacobs-university.de
*/
 
/* 
    Classic shape examples: an inheritance tree in a geometric context
*/
#ifndef __SHAPES_H
#define __SHAPES_H
#include <string>
 
using namespace std;
 
class Shape {            // base class
    private:                   
        std::string name;   // every shape will have a name
    public:
        Shape(const std::string&);  // builds a shape with a name
        Shape();                    // empty shape
        Shape(const Shape&);        // copy constructor
        void printName() const ;      // prints the name  
        void setName(string);
        string getName() const;
};
 
class CenteredShape : public Shape {  // inherits from Shape
    private: 
        double x,y;  // the center of the shape
    public:
        // usual three constructors
        CenteredShape(const std::string&, double, double);
        CenteredShape();
        CenteredShape(const CenteredShape&);
        // moves the shape, i.e. it modifies it center
        void move(double, double);
        void setX(double);
        void setY(double);
        double getX();
        double getY();
};
 
// a regular polygon is a centered_shape with a number of edges
class RegularPolygon : public CenteredShape {
    private: 
        int EdgesNumber;
    public:
        RegularPolygon(const std::string&, double, double, int);
        RegularPolygon(); 
        RegularPolygon(const RegularPolygon&);
        void setEdgesNumber(int);
        int getEdgesNumber();
};
 
// a Circle is a shape with a center and a radius
class Circle : public CenteredShape {
    private:
        double Radius;
    public:
        Circle(const std::string&, double, double, double);
        Circle();
        Circle(const Circle&);
        double perimeter();
        double area();
        void setRadius(double);
        double getRadius();
};
 
//a Rectangle is a RegularPolygon with a height and a width
class Rectangle : public RegularPolygon {
    private:
        double height;
        double width;
    public:
        //constructors
        Rectangle();
        Rectangle(const string&, double, double, double, double);
        Rectangle(const Rectangle&);
        //methods
        double perimeter();
        double area();
        void setHeight(double);
        void setWidth(double);
        double getHeight();
        double getWidth();
};
 
//a square is a rectangle with all sides of the same magnitude
class Square : public Rectangle{
    private:
        int side;
    public:
        //constructors
        Square();
        Square(const string&, double, double, double);
        Square(const Square&);
        //methods
        double perimeter();
        double area();
        void setSides(int);
        int getSides();
 
};
    
#endif