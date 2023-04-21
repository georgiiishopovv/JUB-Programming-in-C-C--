/*
CH-230-A
a12_p1.[cpp]
Georgi Shopov
gshopov@jacobs-university.de
*/
 
#include <iostream>
#include "Shapes.h"
using namespace std;
 
int main()
{
    Hexagon h1("Hexagon1", 9, "blue");
    Hexagon h2("Hexagon2", 15, "green");
    Hexagon h3(h2);
 
    //calling the functions and printing the parametes and the areas of
    //all instances
    cout << h3.getEdgesNumber();
    
 
 
    return 0;
}