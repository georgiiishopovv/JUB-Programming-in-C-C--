/*
CH-230-A
a10_p3.[cpp]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include "City.h"

using namespace std;

int main(int argc, char** argv)
{
	City b;
    City p;
    City l;
    
	string name;
    int inhabitants;
    string mayor;
	double area;
    
    //Getting input for the first instance and setting the fields
	cout << endl << "Please enter data: " << endl;
	cout << "Name: ";
	getline(cin, name);
	b.setName(name);
	cout << "Population: ";
	cin >> inhabitants;
    getchar();
	b.setInhabitants(inhabitants);
    cout << "Mayor: ";
    getline(cin, mayor);
    b.setMayor(mayor);
    cout << "Area: ";
    cin >> area;
    getchar();
    b.setArea(area);

    //Getting input for the second instance and setting the fields
    cout << endl << "Please enter data: " << endl;
	cout << "Name: ";
	getline(cin, name);
	p.setName(name);
	cout << "Population: ";
	cin >> inhabitants;
    getchar();
	p.setInhabitants(inhabitants);
    cout << "Mayor: ";
    getline(cin, mayor);
    p.setMayor(mayor);
    cout << "Area: ";
    cin >> area;
    getchar();
    p.setArea(area);

    //Getting input for the third instance and setting the fields
    cout << endl << "Please enter data: " << endl;
	cout << "Name: ";
	getline(cin, name);
	l.setName(name);
	cout << "Population: ";
	cin >> inhabitants;
    getchar();
	l.setInhabitants(inhabitants);
    cout << "Mayor: ";
    getline(cin, mayor);
    l.setMayor(mayor);
    cout << "Area: ";
    cin >> area;
    getchar();
    l.setArea(area);
    
    cout << "---------------------------------------" << endl;
	b.print();
    p.print();
    l.print();
    
    return 0;
}