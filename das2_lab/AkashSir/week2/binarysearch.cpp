// Week 2: Binary Search
#include <iostream>
#include <algorithm>

using namespace std;

int binary_search(int arr[], int target, int n){
    int left = 0, right = n-1;

    while(left <= right){
        int mid = (left+right)/2;

        if(arr[mid]==target){
            return mid;
        } else if(arr[mid]<target){
            left = mid+1;
        } else {
            right = mid-1;
        }
    }

    return -1;
}

int main(){
    int n;
    cout << "Enter size of the array: ";
    cin >> n;
    int arr[n];

    cout << "Enter array elements: ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    sort(arr, arr+n);

    cout << "Sorted array: ";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }

    int target;
    cout << "\nEnter target value: ";
    cin >> target;

    int srch = binary_search(arr, target, n);

    if(srch==-1){
        cout << "Not Found";
    } else {
        cout << "Found at " << srch;
    }
}