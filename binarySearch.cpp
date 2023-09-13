#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int target) {
    int start = 0;
    int end = n - 1;
    while (start <= end) {
        int mid = start + (end - start) / 2; // Calculate mid within the loop

        // found
        if (arr[mid] == target) {
            return mid;
        } else if (target > arr[mid]) {
            // right me jao
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return -1;
}

int main() {
 int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
 int target = 80;
 int n = 9;
 int ansIndex = binarySearch(arr, n, target);
 if (ansIndex != -1) {
    cout << "Element is found at index " << ansIndex << endl;
 } else {
    cout << "Element is not found" << endl;
 }
 return 0;
}
