#include<iostream>
using namespace std;
int main()
{
    /*Arithmetic Operators
      These operators are used to perform arithmetic or mathematical operations on the operands. 

      Arithmetic Operators can be classified into 2 Types:

     A) Unary Operators: These operators operate or work with a single operand. For example: Increment(++) and Decrement(–) Operators.*/
    int x=7;
    int result=x++;
    cout<<"Increment Operator"<<result<<endl;

    int y=5;
    int result1=y--;
    cout<<"Decrement Operator"<<result1<<endl;

    //B) Binary Operators: These operators operate or work with two operands. For example: Addition(+), Subtraction(-), etc.
    int a=10;
    int b=20;
    cout<<"Addition:"<<a+b<<endl;
    cout<<"Subtraction:"<<a-b<<endl;
    cout<<"Multiplication:"<<a*b<<endl;
    cout<<"Division:"<<a/b<<endl;
    cout<<"Modulo Operation:"<<a%b<<endl;
}