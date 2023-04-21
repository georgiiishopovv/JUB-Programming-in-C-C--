#include <iostream>
#include <string>

using namespace std;

class Car
{
    protected:
        int doors;
        string *parts;
    public:
        Car()
        {
            this->doors = 4;
            string arr[] = {"hood", "front lip"};
            for(int i = 0; i < 3; i++)
            {
                this->parts[i] = arr[i];
            }
        }
        Car(int doors, string* parts)
        {
            this->doors = doors;
            this->parts = parts;
        }
        Car(const Car& car)
        {
            this->doors = car.doors;
            this->parts = car.parts;
        }
        int getDoors()
        {
            return this->doors;
        }
        string* getParts()
        {
            return this->parts;
        }
        void setDoors(int doors)
        {
            this->doors = doors;
        }
        void setParts(string* parts)
        {
            this->parts = parts;
        }
};

int main()
{
    string arr[] = {"front", "back", "side"};
    string arr2[] = {"hi", "hey"};
    Car c1;
    Car c2(6, arr);
    Car c3(c2);

    string *result = c2.getParts();

    cout << result[0] << endl;

    // c2.setParts(arr2);
    // result = c2.getParts();
    // cout << result[0] << endl;
}