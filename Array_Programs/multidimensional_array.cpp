#include <iostream>

using namespace std;

void display2DArray(int arr[][3], int rows, int cols) {
    cout << "2D Array:" << endl;
    for (int i = 0; i < rows; i++) {  
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void display3DArray(int arr[][2][3], int depth, int rows, int cols) {
    cout << "3D Array:" << endl;
    for (int d = 0; d < depth; d++) {  
        for (int i = 0; i < rows; i++) {  
            for (int j = 0; j < cols; j++) {
                cout << arr[d][i][j] << " ";
            }
            cout << endl;
        }
    }
}

int main() {
    // Define a 2D array
    int array2D[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    // Define a 3D array
    int array3D[2][2][3] = {
        {
            {1, 2, 3},
            {4, 5, 6}
        },
        {
            {7, 8, 9},
            {10, 11, 12}
        }
    };

    // Display the 2D array
    display2DArray(array2D, 2, 3);

    // Display the 3D array
    display3DArray(array3D, 2, 2, 3);

    return 0;
}
