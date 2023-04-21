/*
CH-230-A
a10_p4.[cpp]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <iostream>
#include "Critter1.h"

using namespace std;

//constructor without parameters
Critter::Critter()
{
    this->name = "default_name";
    this->hunger = 0;
    this->boredom = 0;
    this->height = 5;
    cout << "Constructor 1 is being called" << endl;
}

//constructor taking only the name
Critter::Critter(string name)
{   
    this->name = name;
    this->hunger = 0;
    this->boredom = 0;
    this->height = 5;
    cout << "Contructor 2 is being called" << endl;
}

//constructor taking all parameters
Critter::Critter(string name, int hunger, int boredom, double height)
{
    this->name = name;
    this->hunger = hunger;
    this->boredom = boredom;
    this->height = height;
    cout << "Constructor 3 is being called" << endl;
}

void Critter::setName(string newname) {
	name = newname;
}

void Critter::setHunger(int newhunger) {
	hunger = newhunger;
}

void Critter::print() {
	cout << "Name: " << name << endl;
    cout << "Hunger: " << hunger << endl;
    cout << "Boredom: " << boredom << endl;
    cout << "Height: " << height << endl;
    cout << "-------------------------------------" << endl;
}

int Critter::getHunger() {
	return hunger;
}