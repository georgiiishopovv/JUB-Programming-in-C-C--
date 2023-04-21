/*
CH-230-A
a12_p1.[cpp]
Georgi Shopov
gshopov@jacobs-university.de
*/

/* 
	Classic shape examples: an inheritance tree in a geometric context
*/
#ifndef __SHAPES_H
#define __SHAPES_H

#include <string>

class Shape {			// base class
	protected:   				// private access modifier: could also be protected
		std::string name;   // every shape will have a name
	public:
		Shape(const std::string&);  // builds a shape with a name
		Shape();					// empty shape
		Shape(const Shape&);		// copy constructor
        std::string getName();
		void printName() const ;  	// prints the name  
};

class CenteredShape : public Shape {  // inherits from Shape
	protected: 
		double x,y;  // the center of the shape
	public:
        // usual three constructors
		CenteredShape(const std::string&, double, double); 
		CenteredShape();
		CenteredShape(const CenteredShape&);
        // moves the shape, i.e. it modifies it center
		void move(double, double);
};

// a regular polygon is a centered_shape with a number of edges
class RegularPolygon : public CenteredShape {
	private: 
		int EdgesNumber;
	public:
		RegularPolygon(const std::string&, double, double, int);
		RegularPolygon();
		RegularPolygon(const RegularPolygon&);
};

// a Circle is a shape with a center and a radius
class Circle : public CenteredShape {
	private:
		double Radius;
	public:
		Circle(const std::string&, double, double, double);
		Circle();
		Circle(const Circle&);
};

class Hexagon : public RegularPolygon
{
    private:
         double side;
         std::string color;
    public:
        //constructors
         Hexagon(const std::string, double, std::string);
         Hexagon(const Hexagon&);
         ~Hexagon();
         //methods
         void setSide(double);
         void setColor(std::string);
         double getSide();
         std::string getColor();
         double perimeter();
         double area();
};
    
#endif