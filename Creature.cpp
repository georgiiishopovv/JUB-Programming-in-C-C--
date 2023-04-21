/*
CH-230-A
a11_p4.[cpp]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <iostream>
#include "Creature.h"

using namespace std;

Creature::Creature(): distance(10)
{
    cout << "Default constructor for the Creature class" << endl;
} 

void Creature::run() const
{ 
    cout << "running " << distance << " meters!\n";
}  

Wizard::Wizard() : distFactor(3)
{
    cout << "Default constructor for the Wizard class" << endl;
}  

void Wizard::hover() const
{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}

Vampire::Vampire() : time(5)
{
    cout << "Default constructor for the Vampire class" << endl;
}

//Vampire constructor with parameters
Vampire::Vampire(double time)
{
    this->time = time;
    cout << "Constructor for the Vampire class" << endl;
}

Vampire::~Vampire()
{
    cout << "Destructor for the Vampire class" << endl;
}

//calculate the speed using data from the parent class
void Vampire::speed() const
{
    cout << "Average speed " << distance / time << " meters/second" << endl;
}

Alien::Alien() : planet_name("Vogsphere")
{
    cout << "Default constructor for the Alien class" << endl;
}

//Alien constructor with parameters
Alien::Alien(string planet_name)
{
    this->planet_name = planet_name;
    cout << "Constructor for the Alien class" << endl;
}

Alien::~Alien()
{
    cout << "Destructor for the Alien class" << endl;
}

//function of the Alien class using data from the parent class
void Alien::introduction() const
{
    cout << "Hello, I am an alien from " << planet_name << endl;
    cout << "It is " << distance << " million km away from Earth!" << endl;
}

