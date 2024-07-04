#include<iostream>
using namespace std;
int main()
{
	int sum=0;
	int a[3]={1,2,3};
	for(int i=0;i<3;i++)
	{
		sum=sum+a[i];
	}
	cout<<"Sum of array:"<<sum;
}
