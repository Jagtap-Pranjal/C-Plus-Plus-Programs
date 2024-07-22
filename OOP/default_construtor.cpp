#include<iostream>
using namespace std;
class A
{
    public :
    
    A()
    {
     cout<<"Hello I am Default Constructor";
    }

};
int main()
{
A a1;
//A a2; by this it will print the the cout statment second time
}