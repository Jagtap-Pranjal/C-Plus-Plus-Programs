#include<iostream>
using namespace std;
class A
{
    public :
    int m,n;
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