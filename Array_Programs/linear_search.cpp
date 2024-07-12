#include<iostream>
using namespace std;

int main()
{
    int n, x;
    cout << "Enter the size: ";
    cin >> n;
    
    int a[n]; 

    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Elements in Array: ";
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    // Searching
    cout << "Enter the element to be searched: ";
    cin >> x;

    bool found = false;
    for(int i = 0; i < n; i++)
    {
        if(x == a[i])
        {
            cout << "Element is found at index " << i << endl;
            found = true;
            break; 
        }
    }

    if (!found)
    {
        cout << "Element is not present" << endl;
    }

    return 0;
}
