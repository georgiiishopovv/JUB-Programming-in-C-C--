#include <iostream>

using namespace std;

int main()
{
    int test_cases;
    cin >> test_cases;
    int line;
    int number;
    int print = 0;
    for(int i = 0; i < test_cases; i++)
    {
        cin >> line;
        int arr[line];
        for(int z = 0; z < line; z++)
        {
            cin >> arr[z];
        }
        int cnt[line+1];
        
        for(int j = 0; j < line; j++)
        {
            cnt[arr[j]]++;
            int count = 0;
            for(int a = 0; a < line; a++)
            {
                if(arr[j] == arr[a])
                {
                    count++;
                    number = arr[j];
                }
            }
            if(count >= 3)
            {
                cout << number << endl;
                print = 1;
                break;
            }
        }
        if(print == 0)
        {
            cout << -1 << endl;
        }
    }
}