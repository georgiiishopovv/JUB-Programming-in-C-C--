#include <iostream>

using namespace std;

int main()
{
    int test_cases;
    cin >> test_cases;
    int line;
    for(int i = 0; i < test_cases; i++)
    {
        cin >> line;
        int arr[line];
        for(int z = 0; z < line; z++)
        {
            cin >> arr[z];
        }

        int main_element;
        if(arr[0] == arr[1])
        {
            main_element = arr[0];
        }
        else
        {
            if(arr[0] == arr[2])
            {
                main_element = arr[0];
            }
            else
            {
                main_element = arr[1];
            }
        }
        for(int y = 0; y < line; y++)
        {
            if(arr[y] != main_element)
            {
                cout << y+1 << endl;
            }
        }
    }
}