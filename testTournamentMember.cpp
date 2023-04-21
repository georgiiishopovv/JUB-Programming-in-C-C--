/*
CH-230-A
a12_p2.[cpp]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <iostream>
#include "TournamentMember.h"
using namespace std;

int main()
{
    //create instances
    TournamentMember mem1;
    TournamentMember mem2("John", "Smith", "2001-09-21", 21, "Italian");
    TournamentMember mem3(mem2);

    //print the information of each member
    mem1.printInformation();
    mem2.printInformation();
    mem3.printInformation();

    //change the static variable - location
    cout << "Changing the location" << endl;
    TournamentMember::changeLocation("Bremen");
    cout << endl;

    //print the updated information of each member
    mem1.printInformation();
    mem2.printInformation();
    mem3.printInformation();
}