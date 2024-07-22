#include<iostream>
using namespace std;
class Example
{
    public:
        void show(int a)
        {
            cout<<"Value of a :"<<a<<endl;
        }
        void show(char a)
        {
            cout<<"Value of a :"<<a<<endl;
        }
};
int main()
{
    Example e1;
    e1.show(1);
    e1.show(100);
}