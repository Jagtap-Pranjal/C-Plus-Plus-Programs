#include<iostream>
using namespace std;
int main()
{
	//Initialize Array with Values 
	cout<<"1st Array:"<<endl;
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	a[0]=100;
	for(int i=0;i<10;i++)
	{
		cout<<a[i]<<endl;
	}
	
	//Inserting elements in an array
	cout<<"2nd Array:"<<endl;
	int b[4];
	b[0]=9;
	b[1]=10;
	b[2]=89;
	b[3]=78;
	for(int i=0;i<4;i++)
	{
		cout<<b[i]<<endl;
	}
	
	//Finding the size of array
	int arr[]={1,2,3,4,5};
	cout<<"Size of one element:"<<sizeof(arr[0])<<endl;
	cout<<"Size of array:"<<sizeof(arr)<<endl;//elements=5 and size=4 (5*4=20)
	int length=sizeof(arr)/sizeof(arr[0]);
	cout<<"Length:"<<length<<endl;
	
	//Printing Array Elements without Indexing-array name is a pointer that stores the address of the first element of an array so, to print the first element we have dereferenced that pointer (*arr) using dereferencing operator (*) which prints the data stored at that address.
	cout<<"Printing Array elements without using indexing:";
	int arr1[]={19,23,47,87,44,55,67};
	cout<<*arr1<<endl;
	cout<<*(arr1+1)<<endl;
	
	cout<<"Printing Array elements without using indexing using For Loop:";
	int n=7;
	for(int i=0;i<n;i++)
	{
		cout<<*(arr1+i)<<endl;
	}
	
	
	return 0;
}
