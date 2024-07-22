#include<iostream>
using namespace std;
class Student
{
    public:
    string name;
    int rollno;
    Student(int rollno,string name)//Parameterized
    {
      this->name=name;
      this->rollno=rollno;
    }

    //Copy Constructor
    Student(Student &orgobj)//pass by reference (pass the object by reference)
    {
        cout<<"Custom Copy Constructor"<<endl;
       this->name=orgobj.name;
      this->rollno=orgobj.rollno;
    }
    void showdata()
    {
        cout<<"Name :"<<name<<endl;
        cout<<"Rollno:"<<rollno<<endl;  
    }
};
int main()
{
    Student s1(193,"Priya");
    //s1.showdata();
    Student s2(s1);
    s2.showdata();
}