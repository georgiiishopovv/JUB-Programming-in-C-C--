/*
CH-230-A
a11_p4.[cpp]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <iostream>

using namespace std;

class Creature {
	public:
		Creature();
		void run() const;

	protected:
		int distance;
};

class Wizard : public Creature {
	public:
		Wizard();
		void hover() const;

	private:
		int distFactor;
};

//new Vampire class
class Vampire : public Creature
{
    private:
        double time;
    public:
        Vampire();
        Vampire(double);
        ~Vampire();
        void speed() const;
};

//new Alien class
class Alien : public Creature
{
    private:
        string planet_name;
    public:
        Alien();
        Alien(string);
        ~Alien();
        void introduction() const;
};

