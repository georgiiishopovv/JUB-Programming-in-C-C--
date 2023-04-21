/*
CH-230-A
a10_p5.[cpp]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <iostream>
#include "Critter2.h"

using namespace std;

//Convert the user input for hunger into double - used for setting data
double Critter::Convert(int hunger)
{
    return (double)hunger/10;
}

//Convert the double hunger back to integer - used when printing
int Critter::Convert()
{
    return (int)(hunger*10);
}

//default constructor
Critter::Critter()
{
    this->name = "default_name";
    this->hunger = 0;
    this->boredom = 0;
    this->height = 5;
    cout << "Constructor 1 is being called" << endl;
}

//one parameter constructor
Critter::Critter(string name)
{   
    this->name = name;
    this->hunger = 0;
    this->boredom = 0;
    this->height = 5;
    cout << "Contructor 2 is being called" << endl;
}

//all parameters constructor
Critter::Critter(string name, int hunger, int boredom, double height)
{
    this->name = name;
    this->hunger = Convert(hunger);
    this->boredom = boredom;
    this->height = height;

    cout << "Constructor 3 is being called" << endl;
}

void Critter::setName(string newname) {
	name = newname;
}

//use the first Convert method to set the hunger level as a double
void Critter::setHunger(int newhunger) {
	hunger = Convert(newhunger);
}

void Critter::print() {
	cout << "Name: " << name << endl;
    cout << "Hunger: " << getHunger() << endl;
    cout << "Boredom: " << boredom << endl;
    cout << "Height: " << height << endl;
    cout << "-------------------------------------" << endl;
}

//return the hunger level as an integer value
int Critter::getHunger() {
	return Convert();
}