#include<iostream>
using namespace std;
class Student
{
    public:
    string name;
    int rollno;
    void getdata()
    {
        cout<<"Enter Name:";
        cin>>name;
        cout<<"Enter Rollno:";
        cin>>rollno;
    }
    void showdata()
    {
        cout<<"-------------------------------------------\n";
        cout<<"Details of Student"<<endl;
        cout<<"Name of Student is:"<<name<<endl;
        cout<<"Rollno of Student is"<<rollno<<endl;
    }
};
int main()
{
    Student s1[2];
    for(int i=0;i<2;i++)
    {
        s1[i].getdata();
    }
    for(int i=0;i<2;i++)
    {
    s1[i].showdata();
    }
    return 0;
}