#include<iostream>
#include<conio.h>
#include "var.h"
using namespace std;
int a=30;//global variable
int fun1()
{
	int a=20;//local variable
	const int b=40;
	cout<<"Value of Local Variable :"<<a<<endl;
	cout<<"Value of Global Variable:"<<::a<<endl;
	cout<<"Value of Constant Variable:"<<b<<endl;
	//b=50; - we cannot modify the const variable 
}
int main()
{
	cout<<"Value of External Variable:"<<s<<endl;//external variable
	fun1();
	return 0;
}
