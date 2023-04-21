/*
CH-230-A
a10_p6.[cpp]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include "Critter.h"

using namespace std;

int main(int argc, char** argv)
{
	cout << endl;
	
	//Creating instances using the different constructors
    Critter crit1;
    //changing the hunger of the first instance to 2
    crit1.setHunger(2);
	crit1.print();
    Critter crit2("Critter2");
    //changing the hunger of the second instance to 2
    crit2.setHunger(2);
	crit2.print();
    Critter crit3("Critter3", 2, 90, 7.5);
	crit3.print();
    Critter crit4("Critter4", 2, 88);
	crit4.print();
    Critter crit5("Critter5", 2, 80, 10, 3.0);

    return 0;
}