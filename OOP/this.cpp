#include<iostream>
using namespace std;
class Student
{
    public :
    string name;
    int rollno;
    Student(string name,int rollno)
    {
        this->name=name;
        this->rollno=rollno;
    }
    void showdata()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Rollno:"<<rollno<<endl;
    }
};
int main()
{
    Student s1("Priya",13);
    s1.showdata();
}