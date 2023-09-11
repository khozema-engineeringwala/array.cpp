#include <iostream>
using namespace std; // You need to include this for cout

void printArray(int arr[][4], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << arr[i][j] << "  ";
        }
        cout << endl;
    }
}

int main() {
    int arr[][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {8, 9, 10, 11}
    };
    int row = 3;
    int col = 4; // You forgot to declare col as int

    printArray(arr, row, col);

    return 0;
}
