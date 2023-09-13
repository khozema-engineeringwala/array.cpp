#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int target) {
    int start = 0;
    int end = n - 1;
    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target) {
            return mid;
        } else if (target > arr[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return -1;
}

int findFirstOccurence(int arr[], int n, int target) {
    int s = 0;
    int e = n - 1;
    int ans = -1;
    while (s <= e) {
        int mid = s + (e - s) / 2;

        if (arr[mid] == target) {
            ans = mid;
             s = mid + 1; //start ko change kar diya last occurence ke liye 
        } else if (target > arr[mid]) {
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }
    return ans;
}

int main() {
    int arr[] = {10, 20, 30, 30, 30, 40, 50, 60, 70, 80, 90};
    int target = 30;
    int n = 11;
    
    int ansIndex = binarySearch(arr, n, target);
    if (ansIndex != -1) {
        cout << "Element is found at index " << ansIndex << endl;
    } else {
        cout << "Element is not found" << endl;
    }
    
    int ans = findFirstOccurence(arr, n, target);
    if (ans != -1) {
        cout << "First occurrence is found at index " << ans << endl;
    } else {
        cout << "Element is not found" << endl;
    }
    
    return 0;
}
