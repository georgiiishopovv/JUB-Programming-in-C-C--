/*
CH-230-A
a11_p2.[cpp]
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

Creature::Creature(): distance(10)
{
    cout << "Default constructor for the Creature class" << endl;
} 

void Creature::run() const
{ 
    cout << "running " << distance << " meters!\n";
}  
class Wizard : public Creature {
	public:
		Wizard();
		void hover() const;

	private:
		int distFactor;
};

Wizard::Wizard() : distFactor(3)
{
    cout << "Default constructor for the Wizard class" << endl;
}  

void Wizard::hover() const
{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}

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

Vampire::Vampire() : time(5)
{
    cout << "Default constructor for the Vampire class" << endl;
}

//Vampire constructor with parameters
Vampire::Vampire(double time)
{
    this->time = time;
    cout << "Constructor for the Vampire class" << endl;
}

Vampire::~Vampire()
{
    cout << "Destructor for the Vampire class" << endl;
}

//calculate the speed using data from the parent class
void Vampire::speed() const
{
    cout << "Average speed " << distance / time << " meters/second" << endl;
}

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

Alien::Alien() : planet_name("Vogsphere")
{
    cout << "Default constructor for the Alien class" << endl;
}

//Alien constructor with parameters
Alien::Alien(string planet_name)
{
    this->planet_name = planet_name;
    cout << "Constructor for the Alien class" << endl;
}

Alien::~Alien()
{
    cout << "Destructor for the Alien class" << endl;
}

//function of the Alien class using data from the parent class
void Alien::introduction() const
{
    cout << "Hello, I am an alien from " << planet_name << endl;
    cout << "It is " << distance << " million km away from Earth!" << endl;
}

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
