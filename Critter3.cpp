/*
CH-230-A
a10_p6.[cpp]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <iostream>
#include "Critter3.h"

using namespace std;

//Convert the user input for hunger into double - used for setting data
double Critter::Convert(int newhunger)
{
    return (double)newhunger/10;
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
    this->hunger = 0.0;
    this->boredom = 0;
    this->height = 5;
    this->thirst = this->hunger;
    cout << "Constructor 1 is being called" << endl;
}

//one parameter constructor
Critter::Critter(string name)
{   
    this->name = name;
    this->hunger = 0.0;
    this->boredom = 0;
    this->height = 5;
    this->thirst = this->hunger;
    cout << "Contructor 2 is being called" << endl;
}

//4 parameters constructor
Critter::Critter(string name, int hunger, int boredom, double height)
{
    this->name = name;
    this->hunger = Convert(hunger);
    this->boredom = boredom;
    this->height = height;
    this->thirst = this->hunger;
    cout << "Constructor 3 is being called" << endl;
}

//all parameters constructor - including the new field
Critter::Critter(string name, int hunger, int boredom, double height, 
                double thirst)
{
    this->name = name; 
    this->hunger = Convert(hunger);
    this->boredom = boredom;
    this->height = height;
    this->thirst = this->hunger;
}


void Critter::setName(string newname) {
	name = newname;
}

void Critter::setHunger(int newhunger) {
	hunger = Convert(newhunger);
}

void Critter::print() {
	cout << "Name: " << name << endl;
    cout << "Hunger: " << getHunger() << endl;
    cout << "Boredom: " << boredom << endl;
    cout << "Height: " << height << endl;
    cout << "Thirst: " << thirst << endl;
    cout << "-------------------------------------" << endl;
}

int Critter::getHunger() {
	return Convert();
}