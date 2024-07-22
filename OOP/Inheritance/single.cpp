#include<iostream>
using namespace std;
//Base class
class Person
{
    public:
        string name;
        int age;
    //First this constructor is called
        Person()
        {
            cout<<"This is Base Class!!\n";
        }
};

//Derived Class
class Student :public Person
{
public :
    int rollno;
    Student()
    {
        {
            cout<<"This is Derived Class!!\n";
        }
    }
    void showdata()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
        cout<<"Rollno:"<<rollno<<endl;
    }
};

int main()
{
    Student s1;
    s1.name=("Priya");
    s1.age=(20);
    s1.rollno=(101);
    s1.showdata();
    
}