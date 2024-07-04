#include<iostream>
using namespace std;
int main()
{
    int array[]={1,2,3,4,5};
    int n=5;
    cout<<"Traversing Array:";
    for(int i=0;i<5;i++)
    {
        cout<<array[i]<<endl;
    }
    cout<<"Reversing Array:";
    for(int i=n-1;i>=0;i--)
    {
        cout<<array[i]<<endl;
    }
}