#include<iostream>
using namespace std;
int main()
{
    //Logical Operators-These operators are used to combine two or more conditions or constraints or to complement the evaluation of the original condition in consideration. 
    //Logical - AND(&&)-Returns true only if all the operands are true or non-zero
    int marks;
    cout<<"Enter your marks: ";
    cin>>marks;
    if(marks>=90 && marks<=100)
    {
        cout<<"You got A Grade!!";
    }
    else if(marks>=80 && marks<=90)
    {
        cout<<"You got B Grade!!";
    }
    else 
    {
        cout<<"You got C Grade!!";
    }

    //Logical OR(||)-Returns true if either of the operands is true or non-zero
    int a=10,b=20,c=30;
    
    
}