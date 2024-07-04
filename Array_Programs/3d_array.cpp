#include<iostream>
using namespace std;
void fun1(int a[][3][4],int l, int rows,int cols)
{
    for(int i=0;i<l;i++)
    {
        for(int j=0;j<rows;j++)
        {
            for(int k=0;k<cols;k++)
            {
                cout<<a[i][j][k]<<" ";
            }
            cout<<endl;
        }
    }
}
int main()
{
    int a[2][3][4]={
        {
            {1, 2, 3, 6},
            {4, 5, 6, 7},
            {7, 8, 9, 4}
        },
        {
            {7, 8, 9, 2},
            {10, 11, 12, 3},
            {13, 14, 15, 2}
        }
    };
       fun1(a,2,3,4);
                      
                     
}