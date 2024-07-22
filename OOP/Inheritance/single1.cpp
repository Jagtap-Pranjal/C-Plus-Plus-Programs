#include<iostream>
using namespace std;
class Person
{
 public:
    string name;
    int age;
    Person(string name,int age)
    {
        this->name=name;
        this->age=age;
    }
};
class Student: public Person
{
    public:
        int roll;
        //we are explicitly calling our base class constructor from our derived class constructor
        Student(string name,int age,int roll):Person(name,age)//first call the parent class constructor 
        {
            this->roll=roll;
        }
        void showdata()
        {
            cout<<"Name:"<<name<<endl;
            cout<<"Age:"<<age<<endl;
            cout<<"Rollno:"<<roll<<endl;
        }
};
int main()
{
    Student s1("Priya",20,101);
    s1.showdata();
}