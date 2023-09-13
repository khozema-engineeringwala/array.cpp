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
            e = mid - 1;  // Move to the left to find the first occurrence
        } else if (target > arr[mid]) {
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }
    return ans;
}
int findlastOccurence(int arr[], int n, int target) {
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
int totalOccurence(int arr[],int n,int target){
    int a=findFirstOccurence(arr,n,target);
    int b=findlastOccurence(arr,n,target);
    int ans=b-a+1;
    return ans;
}

int main() {
    int arr[] = {10, 30, 30, 30, 30, 30, 30, 30, 30, 30, 90};
    int target = 30;
    int n = 11;
    
    int ansIndex = binarySearch(arr, n, target);
 
    int ans = findFirstOccurence(arr, n, target);
    if (ans != -1) {
        cout << "First occurrence is found at index " << ans << endl;
    } else {
        cout << "Element is not found" << endl;
    }
   int ans1=totalOccurence( arr,n,target);
    cout<<"total occurrence:" <<target<<"is "<<ans1;
    return 0;
}
