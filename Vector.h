/*
CH-230-A
a11_p6.[cpp]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include <iostream>
#include <string>

class Vector
{
    private:
        int size;
        double *ptr;
    public:
        //constructors
        Vector();
        Vector(int, double*);
        Vector(const Vector&);
        //destructor
        ~Vector();
        //methods
        void setSize(int);
        void setPointer(double*);
        int getSize();
        double* getPointer();
        void print_components() const;
        double norm();
        double scalar(const Vector) const;
        Vector add(const Vector) const;
        Vector sub(const Vector) const;
};