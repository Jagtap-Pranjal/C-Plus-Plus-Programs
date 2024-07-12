#include<iostream>
using namespace std;
class Student
{
    public:
    string name;
    string Class;
    int rollno;
    void show()
    {
        cout<<"Name:"<<name<<"\n";
        cout<<"Rollno:"<<rollno<<"\n";
        cout<<"Class:"<<Class<<"\n";
    }
};
int main()
{
    Student s1;
    s1.name="Priya";
    s1.Class="FY";
    s1.rollno=1;
    s1.show();
    return 0;
}