/*
CH-230-A
a11_p3.[cpp]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <iostream>
#include "Creature.h"

using namespace std;

int main()
{ 
    cout << "Creating a Creature.\n";
    Creature c;
    c.run();

    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();

    cout << "\nCreating a Wizard.\n";
    Wizard w1;
    w1.run();
    w1.hover();

    cout << "\nCreating a Vampire.\n";
    Vampire v(3);
    //calling parent and class function for the Vampire instance
    v.run();
    v.speed();

    cout << "\nCreating an Alien.\n";
    Alien a("Cybertron");
    //calling parent and class function for the Alien instance
    a.run();
    a.introduction();

    cout << endl;
    return 0;
} 
