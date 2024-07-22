#include<iostream>
using namespace std;
class Student
{
    private:
        int adharno;
    public:
        int roll;
        string name;
    int setter(int no)
    {
        adharno=no;
    }
    int getter()
    {
         cout<<"Adharno:"<<adharno;
    }

};
int main()
{
    Student s1;
    s1.roll=1;
    s1.name="Priya";
    cout<<"Rollno:"<<s1.roll<<endl;
    cout<<"Name:"<<s1.name<<endl;
    s1.setter(12);
   s1.getter();
}