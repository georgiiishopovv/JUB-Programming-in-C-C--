#include <iostream>
#include <string.h>
using namespace std;

class Car
{
    private:
        char *name;
        string model;
        double price;
    public:
        Car()
        {
            this->name = new char[30];
            strcpy(this->name, "default name");
            this->model = "default model";
            this->price = 000000;
        }
        Car(const char* name, string model, double price)
        {
            this->name = new char[strlen(name)-1];
            strcpy(this->name, name);
            this->model = model;
            this->price = price;
        }
        Car(const Car& car)
        {
            this->name = new char[30];
            strcpy(this->name, car.name);
            this->model = car.model;
            this->price = car.price;
        }
        ~Car()
        {
            delete [] name;
        }
        char* getName() const
        {
            return this->name;
        }
        virtual void print() const
        {
            cout << name << "Car print" << endl;
        }
};

class Taxi : public Car
{
    private:
        int seats;
    public:
        Taxi()
        {
            this->seats = 5;
        }
        Taxi(int seats, const char* name, string model, double price) : Car(name, model, price)
        {
            this->seats = seats;
        }
        Taxi(const Taxi& taxi) : Car(taxi)
        {
            this->seats = seats;
        }
        void print() const
        {
            cout << getName() << seats << "Taxi print" << endl;
        }
};


int main()
{
    Car *cars[5];
    cars[0] = new Taxi(5, "Skoda", "Octavia", 23000);
    cars[0]->print();

    Car *list = new Car[10];
    list[0].print();
}