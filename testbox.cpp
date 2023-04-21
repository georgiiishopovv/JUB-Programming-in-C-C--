/*
CH-230-A
a11_p6.[cpp]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <iostream>
#include <cstring> 
#include "Box.h"

using namespace std;

int main()
{
    int n;
    double height;
    double width;
    double depth;
    double volume;
    cout << "Enter the number of boxes: ";
    cin >> n;

    //allocate memory for an array of boxes
    Box *boxes_arr;
    boxes_arr = new Box[2*n];

    //use user input for the parameter of the first n instances
    for(int i = 0; i < n; i++)
    {
        cout << "Enter data for box number " << i+1 << endl;
        cout << "Height: ";
        cin >> height;
        cout << "Width: ";
        cin >> width;
        cout << "Depth: ";
        cin >> depth;

        //boxes_arr[i] = Box(height, width, depth);
        boxes_arr[i].setHeight(width);
        boxes_arr[i].setWidth(width);
        boxes_arr[i].setDepth(depth);
    }

    //use the copy constructor for the remaining instances
    for(int i = n; i < 2*n; i++)
    {
        boxes_arr[i] = boxes_arr[i-n];
    }

    //loop for calculating and printing the volume of each instance
    for(int i = 0; i < 2*n; i++)
    {
        volume = boxes_arr[i].getHeight() * boxes_arr[i].getWidth() * 
                 boxes_arr[i].getDepth();
        cout << "The volume of box " << i+1 << " is " << volume << endl;
    }

    //release the memory
    delete [] boxes_arr;
}