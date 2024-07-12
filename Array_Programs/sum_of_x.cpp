#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter the value of x:";
    cin>>x;
    int a[6]={1,2,3,4,5,6};
    for(int i=0;i<6;i++)
    {
        for(int j=i+1;j<6;j++)
        {
            if(a[i]+a[j]==x)
            {
                cout<<a[i]<<" "<<"and"<<" "<<a[j]<<" "<<"are the elements whose sum is"<<" "<<x<<endl;
            }
            
        }
    }
}