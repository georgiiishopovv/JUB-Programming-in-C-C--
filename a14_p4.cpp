/*
CH-230-A
a13_p4.[cpp]
Georgi Shopov
gshopov@jacobs-university.de
*/

#include<iostream>
using namespace std;

/*
Since class D is inheriting both from B and C, which are inheriting 
from A, the use of class A's print() function is going to be ambiguous
as we will have two different values for the x parameter of the D object.

By switching to virtual inheritance, class A is invoked only once with
the last value that was set for the x parameter using inheritance from class C.
*/
 
class A
{
  int x;
public:
  void setX(int i) {x = i;}
  void print() { cout << x; }
};
 
class B:  public virtual A
{
public:
  B()  { setX(10); }
};
 
class C:  public virtual A  
{
public:
  C()  { setX(20); }
};
 
class D: public B, public C {
};
 
int main()
{
    D d;
    d.print();
    return 0;
}