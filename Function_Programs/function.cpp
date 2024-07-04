#include<iostream>
#include<conio.h>
using namespace std;
class Item
{
	public :
		int cost;
		string name;
	int getdata()
	{
		cout<<"Enter Item Name :";
		cin>>name;
		cout<<"Enter the Cost of Item :";
		cin>>cost;
	}
	int showdata()
	{
		cout<<"Item Name is :"<<name<<" and it has cost:"<<cost;
	}
};
int main()
{
	Item i1;
	i1.getdata();
	i1.showdata();
	getch();
	return 0;
}
