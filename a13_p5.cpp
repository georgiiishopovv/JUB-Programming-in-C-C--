/*
CH-230-A
a13_p5.[cpp]
Georgi Shopov
gshopov@jacobs-university.de
*/

/*
Since D is inheriting directly from B and C and implicitly from A, 
we are invoking all of these constructors. However, since A does not have a 
default constructor we need to specify it in the D class constructor in order
for the virtual inheritance to work properly.
*/

#include<iostream>
using namespace std;
 
class A
{
  int x;
public:
  A(int i) { x = i; }
  virtual void print() { cout << x; }
};
 
class B: virtual public A
{
public:
  B():A(10) {  }
};
 
class C:  virtual public A 
{
public:
  C():A(10) {  }
};
 
class D: public B, public C {
public:
    D() : A(10) {}
};
 
int main()
{
    D d;
    d.print();
    return 0;
}