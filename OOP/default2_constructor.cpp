#include<iostream>
using namespace std;
class Student
{
    public:
    string dep;
    Student()
    {
        dep="CS";
    }
};
int main()
{
    Student s1;
    cout<<s1.dep;
}