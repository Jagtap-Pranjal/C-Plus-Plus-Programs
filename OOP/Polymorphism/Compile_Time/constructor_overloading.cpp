#include<iostream>
using namespace std;
class Student
{
    public :
    string name;
    int rollno;
    //default constructor
    Student()
    {
        cout<<"Default Constructor !!\n";
    }

    //parameterized constructor
    Student(string name,int rollno)
    {
        this->name=name;
        this->rollno=rollno;
        cout<<"Name:"<<name<<endl;
        cout<<"Rollno:"<<rollno<<endl;
    }
};
int main()
{
    Student s1;//it will call default constructor
    Student("priya",1);//it will call parameterized constructor
}