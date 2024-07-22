#include<iostream>
using namespace std;
//Function name in both the classes are having same name
class Base
{
    public:
            virtual void fun1()
            {
                cout<<"Base Class Function !!\n";
            }
};
class Derived
{
    public:
            void fun1()
            {
                cout<<"Derived Class Function !!\n";
            }
};
int main()
{
    Base b1;
    b1.fun1();

    Derived d1;
    d1.fun1();
    return 0;
}