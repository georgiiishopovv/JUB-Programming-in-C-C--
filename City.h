/*
CH-230-A
a10_p3.[cpp]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <string> 
#include <iostream>
using namespace std;

class City
{
private:
	string name;
	int inhabitants;
	string mayor;
	double area;

public: 
	//setter methods
	void setName(string newname);
	void setInhabitants(int newinhabitants);
	void setMayor(string newmayor);
    void setArea(double newarea);

    //getter methods
	string getName();
	int getInhabitants();
    string getMayor();
    double getArea();

	void print();
}; 
