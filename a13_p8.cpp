/*
CH-230-A
a13_p8.[cpp]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <iostream>
#include <cstring>
#include <string>
using namespace std;

class Motor
{
    public:
        Motor() {throw "This motor has a problem";}
};

class Car
{
    //the car class uses object from the Motor class
    private:
        Motor* motor;
    public:
        Car() {this->motor = new Motor();};
};

class Garage
{
    //the garage object uses an object from the Car class
    private:
        Car* car;
    public:
        Garage()
        {
            //in-function try and catch based on the creation of a Car object
            try
            {
                car = new Car();
            }
            catch(const char* a)
            {
                throw "The car in this garage has problems with the motor";
            }
            
        }
};

int main()
{
    try
    {
        Garage garage;
    }
    //catch the error from the Garage class
    catch(const char* a)
    {
        cerr << a << endl;
    }
}