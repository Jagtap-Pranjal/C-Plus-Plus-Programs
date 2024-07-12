#include <iostream>
using namespace std;

void fun1(int arr[], int n) {
    // To find the smallest element in the array
    int min = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    cout << endl;
    cout << "Smallest element present in given Array is: " << min << endl;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n]; // Declare array with size n
    cout << "Enter the elements in the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Elements in array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    fun1(arr, n);

    return 0;
}
