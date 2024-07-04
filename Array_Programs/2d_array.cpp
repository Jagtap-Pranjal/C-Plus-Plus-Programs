#include<iostream>
using namespace std;
void fun1(int a[2][3],int row,int col)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int a[2][3]={{1,2,4},{5,6,7}};
    fun1(a,2,3);
    return 0;
    
} 

