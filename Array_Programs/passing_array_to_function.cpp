#include <iostream>
using namespace std;

// Function to pass array as a sized array argument
void fun1(int a[5], int size)
{
    cout << "Passing array as a sized array argument:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

// Function to pass array as an unsized array argument
void fun2(int a[], int size)
{
    cout << "Passing array as an unsized array argument:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

// Function to pass array as a pointer argument
void fun3(int* ptr, int size)
{
    cout << "Passing array as a pointer argument:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << ptr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int a[] = {10, 20, 30, 40, 50};
    
    // Calling functions passing array name and its size
    fun1(a, 5);
    fun2(a, 5);
    fun3(a, 5);

    return 0;
}

