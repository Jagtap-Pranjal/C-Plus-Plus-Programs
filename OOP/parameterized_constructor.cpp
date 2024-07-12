#include<iostream>
using namespace std;
class Student
{
    public:
    string name;
    int rollno;
    Student(int r,string n)//Parameterized
    {
      name=n;
      rollno=r;
    }
    void showdata()
    {
        cout<<"Name :"<<name<<endl;
        cout<<"Rollno:"<<rollno<<endl;  
    }
};
int main()
{
    Student s1(103,"Priya");
    s1.showdata();
}