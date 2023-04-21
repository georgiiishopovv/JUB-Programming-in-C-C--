/*
CH-230-A
a12_p3.[cpp]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <iostream>
#include <string.h>
#include "TournamentMember.h"
using namespace std;

//set static location variable as default
std::string TournamentMember::location = "default_location";

//empty constructor
TournamentMember::TournamentMember()
{
    strcpy(this->firstName, "default_first_name");
    strcpy(this->lastName, "default_last_name");
    strcpy(this->dateBirth, "year-mm-dd");
    this->age = 20;
    this->nationality = "default_nationality";
    cout << "Default constructor for parents class is being called" << endl;
}

//parameterized constructor
TournamentMember::TournamentMember(const char firstName[],const char lastName[], 
    const char dateBirth[], int age, string nationality)
{
    strcpy(this->firstName, firstName);
    strcpy(this->lastName, lastName);
    strcpy(this->dateBirth, dateBirth);
    this->age = age;
    this->nationality = nationality;
    cout << "Parameteric constructor for parent class is being called" << endl;
}

//copy constructor
TournamentMember::TournamentMember(const TournamentMember& tm)
{
    strcpy(this->firstName, tm.firstName);
    strcpy(this->lastName, tm.lastName);
    strcpy(this->dateBirth, tm.dateBirth);
    this->age = tm.age;
    this->nationality = tm.nationality;
    cout << "Copy constructor for parents class is being called" << endl;
}

//destructor


TournamentMember::~TournamentMember()
{
    cout << "Destructor for parent class is being called" << endl;
}

//print the information of each member
void TournamentMember::printInformation() const
{
    cout << "Name: " << firstName << " " << lastName << endl;
    cout << "Date of birth: " << dateBirth << endl;
    cout << "Location: " << location << endl;
    cout << "Age and Nationality: " << age << " - " << nationality << endl;
    cout << endl;
}

//change the static location
void TournamentMember::changeLocation(string newlocation)
{
    location = newlocation;
} 

//parameterized constructor for Player class
Player::Player(const char firstName[], const char lastName[], 
              const char dateBirth[], int age, string nationality, int number, 
              string position, int goals, string foot) : TournamentMember
              (firstName, lastName, dateBirth, age, nationality)
{
    this->number = number;
    this->position = position;
    this->goals = goals;
    this->foot = foot;
    cout << "Parametric constructor for the Player class being called" << endl;
}

//copy constructor for Player class
Player::Player(const Player &pl) : TournamentMember(pl)
{
    this->number = pl.number;
    this->position = pl.position;
    this->goals = goals;
    this->foot = pl.foot;
    cout << "Copy constructor fot the Player class is being called" << endl;
}

//destructor for player class
Player::~Player()
{
    cout << "Destructor for the Player class is being called" << endl;
}

// //print function for the Player class
// void Player::printPlayerIn() const
// {
//     cout << "Name: " << firstName << " " << lastName << endl;
//     cout << "Date of birth: " << dateBirth << endl;
//     cout << "Location: " << location << endl;
//     cout << "Age and Nationality: " << age << " - " << nationality << endl;
//     cout << "Number and positon: " << number << " - " << position << endl;
//     cout << "Number of goals: " << goals << endl;
//     cout << "Left or right footed?: " << foot << endl;
//     cout << endl;
// }

//incrementing the goals of a Player
void Player::incrementGoals()
{
    this->goals++;
}
