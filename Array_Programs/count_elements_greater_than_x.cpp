#include<iostream>
using namespace std;
int main()
{
    int x=5;
    int a[5]={7,6,4,2,1};
    for(int i=0;i<5;i++)
    {
        if(a[i]>x)
        {
            cout<<"Elements greater than x= "<<x<<" are: "<<a[i]<<endl;
        }
    }
}