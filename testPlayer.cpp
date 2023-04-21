/*
CH-230-A
a12_p3.[cpp]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <iostream>
#include "TournamentMember.h"
using namespace std;

int main()
{
    cout << endl;
 //creating three Players
 Player p1("John", "Will", "2001-09-21", 21, "American", 23, "LW", 8, "Right");
 Player p2("Smol", "Timber", "1991-06-28", 31, "English", 5, "CAM", 2, "Right");
 Player p3("Terry", "Clothe", "1996-02-19", 26, "Polish", 9, "ST", 15, "Left");    
 Player::changeLocation("Bremen");

    cout << endl;

    // p1.printPlayerIn();
    // p2.printPlayerIn();
    // p3.printPlayerIn();

    //changing the static location
    cout << "Changing location to Hamburg" << endl;
    Player::changeLocation("Hamburg");
    //incrememnting the goals of some Players
    cout <<p1.getLastName() << " and " << p3.getLastName() << " scored" << endl;
    p1.incrementGoals();
    p3.incrementGoals();

    cout << endl;

    //printing the updated information for each Player
    // p1.printPlayerIn();
    // p2.printPlayerIn();
    // p3.printPlayerIn();
}