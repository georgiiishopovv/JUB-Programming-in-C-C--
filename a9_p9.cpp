/*
CH-230-A
a9_p9.[cpp]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>
using namespace std;

int main()
{
    string words[17] = {"computer", "television", "keyboard", "laptop", "mouse",
                        "read", "car", "pen", "laundry", "chocolate", "apple", 
                        "glasses", "shoes", "new", "table", "sweet", "perfect"};

    int tries = 1;
    int random_number;
    int word_number;
    char command;
    string temp;
    int yes = 1;

    srand(static_cast<unsigned int>(time(0)));
    while (1)
    {
        //get a random number from 1 to 17 to access the words in the array
        random_number = rand();
        word_number = (random_number % 17) + 1;
        yes = 1;
        tries = 1;
        while (yes == 1)
        {
            //use a temporary variable to print the word with the underscores
            temp = words[word_number-1];
            int length = words[word_number-1].length();

            for (int i = 0; i < length; i++)
            {
                if (temp[i] != 'a' && temp[i] != 'e' && temp[i] != 'i' &&
                    temp[i] != 'o' && temp[i] != 'u')
                {
                    temp[i] = '_';
                }
            }
            cout << temp << endl;

            cout << "Try to guess the word" << endl;
            string user_guess;
            cin >> user_guess;

            //check if the user guessed the word
            if (user_guess == words[word_number-1])
            {
                cout << "Congratulations! ";
                if (tries == 1)
                {
                    cout << "You guessed the word in " << tries 
                    << " try!" << endl;
                }
                else
                {
                    cout << "You guessed the word in " << tries 
                    << " tries!" << endl;
                }
                
                //Ask the user if he wants to play again
                cout << "Do you want to play again? (y/n): " << endl;
                cin >> command;
                if (command == 'y')
                {
                    //change yes to 0 so that another word will be used
                    yes = 0;
                }
                else if (command == 'n')
                {
                    cout << "Quitting the game!" << endl;
                    exit(1);
                }
            }
            
            //check whether the user wants to terminate the game directly
            else if (user_guess == "quit")
            {
                cout << "Quitting the game!" << endl;
                exit(1);
            }
            
            //increment the number of tries
            else
            {
                tries++;
            }
        }
    }
}
