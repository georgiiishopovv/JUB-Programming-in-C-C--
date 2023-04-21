/*
CH-230-A
a11_p4.[cpp]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <iostream>
#include "Creature.h"

using namespace std;

int main()
{
    string command;

    //endless loop acting according to input
    while(1)
    {
        cin >> command;
        if(command == "wizard")
        {
            cout << "Creating a wizard" << endl;
            //dynamically create a Wizard object
            Wizard *w = new Wizard;
            w->hover();
            delete w;
        }
        else if(command == "object1")
        {
            cout << "Creating a vampire" << endl;
            //dynamically create a Vampire object
            Vampire *v = new Vampire;
            v->speed();
            delete v;
        }
        else if(command == "object2")
        {
            cout << "Creating an alien" << endl;
            //dynamically create an Alien object
            Alien *a = new Alien;
            a->introduction();
            delete a;
        }
        //"quit" = termination of the program
        else if(command == "quit")
        {
            exit(1);
        }
    }    
}