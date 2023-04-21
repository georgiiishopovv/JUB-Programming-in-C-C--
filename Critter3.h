/*
CH-230-A
a10_p6.[cpp]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <string>
using namespace std;

class Critter
{
private: 
	string name;
	double hunger;
	int boredom;
	double height;
    double thirst;

    //converting methods for the hunger
	double Convert(int hunger);
    int Convert();

public: 
	//constructors
	Critter();
    Critter(string);   
    Critter(string, int, int, double = 10);
    Critter(string, int, int, double, double);
    
    //getter and setter methods
	void setName(string newname);
	void setHunger(int newhunger);
	void setBoredom(int newboredom);
	int getHunger();
	void print();
};