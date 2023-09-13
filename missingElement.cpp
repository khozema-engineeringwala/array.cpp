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
int FindMissingElementa(int arr[],int n){
int s=0;
int e= n-1;
int mid=s+(e-s)/2;
int ans =-1;
while(e>=s){
  int diff=arr[mid]-mid;
   if(diff==1){
    // rigth search 
    s=mid+1;
   }
   else{
    // ans mai store
    ans=mid+1;
    // left mai jao
    e=mid-1;
   }
   mid=s+(e-s)/2;
  }
  return ans;
}

int main() {
    int arr[] = {1, 2,  4, 5, 6,7,8, 9, 10, 11, 12};
    int n = 11;
    int ans=FindMissingElementa(arr,n);
    cout<<"the element missing is "<<ans<<endl;
    
    return 0;
}
