/*
CH-230-A
a11_p5.[cpp]
Georgi Shopov
gshopov@jacobs-university.de
*/
 
#include <iostream>
#include "Shapestest.h"
using namespace std;
 
int main(int argc, char** argv) {
 
    Circle c1("first circle", 3, 4, 7);
    RegularPolygon r1("TRIANGLE", 1, 1, 3);
 
    r1.printName();
    c1.printName();
 
    //creating new test objects
    cout << "Creating a second circle, a rectangle and a square!" << endl;
    Circle c2("second circle", 0, 5, 3);
    Rectangle re1("first rectangle", 3, 1, 5, 8);
    Square sq1("first square", 1, 5, 4);
    
    //printing the perimeters and areas of each of the new objects
    cout << "Perimeter - second circle is " << c2.perimeter() << endl;
    cout << "Area - second circle is " << c2.area() << endl;
 
    cout << "Perimeter - first rectangle is " << re1.perimeter() << endl;
    cout << "Area - first rectangle is " << re1.area() << endl;
 
    cout << "Perimeter - first square is " << sq1.perimeter() << endl;
    cout << "Area - first square is " << sq1.area() << endl;
}
