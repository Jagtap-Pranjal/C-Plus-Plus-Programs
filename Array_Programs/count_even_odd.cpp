#include<iostream>
using namespace std;
void fun1_even_odd(int a[],int num)
{
    int count_even,count_odd=0;
    int even,odd;
    for(int i=0;i<num;i++)
    {
        if(a[i]%2==0)
        {
            count_even++;
        }
        else 
        {
            count_odd++;
        }
    }
    cout<<"Even:"<<count_even;
    cout<<"Odd:"<<count_odd;
}
int main()
{
    int num;
    cout<<"Enter the num of elements:";
    cin>>num;

    int a[num];
    cout<<"Enter the Elements in array:";
    for(int i=0;i<num;i++)
    {
        cin>>a[i];
    }

    cout<<"Elements in array are:";
    for(int i=0;i<num;i++)
    {
        cout<<a[i]<<" ";
    }

    fun1_even_odd(a,num);
    return 0;
}