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
        //constructors
        Box();
        Box(double, double, double);
        Box(const Box&);
        //destructor
        ~Box();
        //getter and setter methods
        void setHeight(double);
        void setWidth(double);
        void setDepth(double);
        double getHeight();
        double getWidth();
        double getDepth();
};