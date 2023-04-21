/*
CH-230-A
a11_p6.[cpp]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <iostream>
#include <string>
#include "Vector.h"

using namespace std;

int main()
{
    double input_arr1[4] {3.2, 4.5, 5.0, 3.3};
    double input_arr2[4] {1.3, 2.5, 5.1, 4.9};
    
    //creating four instances of the vector class using different constructors
    Vector v1;
    Vector v2(4, input_arr1);
    Vector v3(v2);
    Vector v4(4, input_arr2);

    double *ptr = v4.getPointer();

    for(int i = 0; i < v4.getSize(); i++)
    {
        cout << ptr[i] << endl;
    }

    // //calling the methods and printing the results
    // cout << "The norm of the second vector is " << v2.norm() << endl;
    // cout << "The scalar product of the second and fourth vectors is " << 
    //         v2.scalar(v4) << endl;
    // cout << "Vector 2 + Vector 4:" << endl;
    // (v2.add(v4)).print_components();
    // cout << endl;
    // cout << "Vector 2 - Vector 4:" << endl;
    // (v2.sub(v4)).print_components();
    // cout << endl;
}