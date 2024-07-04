#include<iostream>
using namespace std;
class Student
{
	public:
	int rollno;
	string name;
	
	int getdata(int r,int n);
	int showdata()
	{
		cout<<"Student Details :"<<endl;
		cout<<"Roll no :"<<rollno<<endl;
		cout<<"Name :"<<name;
	}
};
int Student :: getdata(int r,int n)
{
	rollno=r;
	name=n;
}
int main()
{
	Student st1;
	st1.getdata(1,'Abc');
	st1.showdata();
	return 0;
}
