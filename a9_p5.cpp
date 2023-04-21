/*
CH-230-A
a9_p5.[cpp]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int player_guess;
    int tries = 0;
    int random_number;
    int borders;
    string player_name;

    cout << "Player name?: ";
    getline(cin, player_name);

    //get a random number between 1 and 100
    srand(static_cast<unsigned int>(time(0)));
    random_number = rand();
    borders = (random_number % 100) + 1;    

    //repeat until the user guesses the number
    while(player_guess != borders)
    {
        cout << "Pick a number between 1 and 100: ";
        cin >> player_guess;
        if(player_guess > borders)
        {
            cout << "Too high!" << endl;
        }
        else if(player_guess < borders)
        {
            cout << "Too low!" << endl;
        }

        //increment the number of tries
        tries++;
    }

    cout << "Congratulations " << player_name << "!" << endl;
    cout << "Number of tries: " << tries << endl;

    return 0;
}