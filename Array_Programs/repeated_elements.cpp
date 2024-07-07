#include <iostream>
using namespace std;

void fun1(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j] && arr[j]!=r)
            {
                cout << arr[i] << " ";

                int r=arr[i];
                break; 
            }
        }
    }
}

int main()
{
    int arr[] = {9, 8, 7,9,8,9, 6};
    int n = 6;
    fun1(arr, n);
    return 0;
}
