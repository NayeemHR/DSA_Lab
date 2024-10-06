#include<iostream>
#include<vector>

using namespace std;

int recBinarySearch(vector<int> arr, int tar, int st, int end){
    if(st<=end){
        int mid = st + (end-st)/2;
        if(tar > arr[mid]){
            return recBinarySearch(arr, tar, mid+1, end);
        }else if(tar < arr[mid]){
            return recBinarySearch(arr, tar, st, mid-1);
        }else{
            return mid;
        }
    }
    return -1;
}

int main (){
    vector<int> arr1 = {5,12,30,90,100,125,150}; // sorted array
    int t = 90;

    // Call recBinarySearch with start and end index
    cout << recBinarySearch(arr1 , t, 0, arr1.size()-1) << endl;

    return 0;
}
