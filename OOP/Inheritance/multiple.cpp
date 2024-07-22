#include<iostream>
using namespace std;
class Person
{
    public:
        string name;
};
class Student
{
    public:
        int roll;
    
};
class Graduate_student: public Student,public Person
{
    public:
        string project;
};
int main()
{
    Graduate_student g1;
    g1.name="Priya";
    g1.roll=1;
    g1.project="PQR";
    cout<<g1.name<<endl;
    cout<<g1.roll<<endl;
    cout<<g1.project<<endl;

}