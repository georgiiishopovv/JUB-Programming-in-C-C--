#include <iostream>
using namespace std;

void change(const int a)
{
    int b = a;
    std::cout << b;
}

int main()
{
    int a = 5;
    change(a);
} 