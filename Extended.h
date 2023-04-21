/*
CH-230-A
a12_p3.[cpp]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <iostream>
#include <string.h>

class TournamentMember
{
    protected:
        char firstName[36];
        char lastName[36];
        char dateBirth[11];
        //static location
        static std::string location;
        int age;
        std::string nationality;
    public:
        //constructors
        TournamentMember();
        TournamentMember(const char [], const char [], const char [], int, 
                        std::string);
        TournamentMember(const TournamentMember&);
        ~TournamentMember();
        //inline setter functions
        void setFirstName(const char firstName[])
        {
            strcpy(this->firstName, firstName);
        }
        void setLastName(const char lastName[])
        {
            strcpy(this->lastName, lastName);
        }
        void setDateBirth(const char dateBirth[])
        {
            strcpy(this->dateBirth, dateBirth);
        }
        void setAge(int age)
        {
            this->age = age;
        }
        void setNationality(std::string nationality)
        {
            this->nationality = nationality;
        }
        //inline getter functions
        char* getFirstName()
        {
            return this->firstName;
        }
        char* getLastName()
        {
            return this->lastName;
        }
        char* getDateBirth()
        {
            return this->dateBirth;
        }
        std::string getLocation()
        {
            return this->location;
        }
        int getAge()
        {
            return this->age;
        }
        std::string getNationality()
        {
            return this->nationality;
        }
        //print the information of each member
        void printInformation() const;
        //static method to change the static variable - location
        static void changeLocation(std::string);
};

//a player is a TournamentMember
class Player : public TournamentMember
{
    private:
        int number;
        std::string position;
        int goals;
        std::string foot;
    public:
        //constructors
        Player(const char [], const char [], const char [], int, std::string, 
              int, std::string, int, std::string);
        Player(const Player&);
        ~Player();
        //inline setter functions
        void setNumber(int number)
        {
            this->number =number;
        }
        void setPosition(std::string position)
        {
            this->position = position;
        }
        void setFoot(std::string foot)
        {
            this->foot = foot;
        }
        //inline getter functions
        int getNumber()
        {
            return this->number;
        }
        std::string getPositon()
        {
            return this->position;
        }
        int getGoals()
        {
            return this->goals;
        }
        std::string getFoot()
        {
            return this->foot;
        }
        //print the information of each player
        void printPlayerIn() const;
        //increment the number of goals of a player
        void incrementGoals();
};