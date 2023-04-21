/*
CH-230-A
a10_p3.[cpp]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <iostream>
#include "City.h"

using namespace std;

//setter methods' definitions
void City::setName(string newname) 
{
	name = newname;
}

void City::setInhabitants(int newinhabitants) 
{
	inhabitants = newinhabitants;
}

void City::setMayor(string newmayor) 
{
	mayor = newmayor;
}

void City::setArea(double newarea) 
{
	area = newarea;
}

//getter methods' definitions
string City::getName() 
{
	return name;
}

int City::getInhabitants()
{
    return inhabitants;
}

string City::getMayor()
{
    return mayor;
}

double City::getArea()
{
    return area;
}

void City::print() 
{
	cout << "City: " << name << endl;
    cout << "Population: " << inhabitants << endl;
    cout << "Mayor: " << mayor << endl;
    cout << "Area: " << area << " km2" << endl;
    cout << "---------------------------------------" << endl;
}
