#include<iostream>
using namespace std;
class A
{
protected:
int x;
public:
	A()
{x=5;}
void print()
{
    cout<<"inside A"<<endl;}
};
class B:public A
{
int x;
public:
	B(){x=10;}

void print()
{
    cout<<"inside B"<<endl;
   cout<<x<<endl;
   }
};
main()
{
    B b;
    A a;
    a.print();
    b.print();
}
