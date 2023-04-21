/*
CH-230-A
a10_p4.[cpp]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <string>
using namespace std;

class Critter
{
private: 
	string name;
	int hunger;
	int boredom;
	double height;

public: 
	//constructors
	Critter();
    Critter(string);   
    Critter(string, int, int, double = 10);
    
    //setter and getter methods
	void setName(string newname);
	void setHunger(int newhunger);
	void setBoredom(int newboredom);
	int getHunger();
	void print();
};