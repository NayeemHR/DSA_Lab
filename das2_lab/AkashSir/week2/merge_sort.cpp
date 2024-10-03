// Week 2: Merge Sort

#include <iostream>

using namespace std;

void print_array(int arr[], int n){
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}

void merge(int arr[], int low, int mid, int high){
    int leftArraySize = mid - low + 1;
    int rightArraySize = high - mid;

    int leftArray[leftArraySize];
    int rightArray[rightArraySize];

    for(int i=low;i<=mid;i++){
        leftArray[i-low] = arr[i];
    }

    for(int i=mid+1;i<=high;i++){
        rightArray[i-(mid+1)] = arr[i];
    }

    int leftMarker = 0;
    int rightMarker = 0;
    int arrayPos = low;

    while(leftMarker<leftArraySize && rightMarker<rightArraySize){
        if( leftArray[leftMarker] < rightArray[rightMarker] ){
            arr[arrayPos] =  leftArray[leftMarker];
            leftMarker++;
            arrayPos++;
        } else {
            arr[arrayPos] = rightArray[rightMarker];
            rightMarker++;
            arrayPos++;
        }
    }

    while(leftMarker < leftArraySize){
        arr[arrayPos] =  leftArray[leftMarker];
        leftMarker++;
        arrayPos++;
    }

    while(rightMarker < rightArraySize){
        arr[arrayPos] = rightArray[rightMarker];
        rightMarker++;
        arrayPos++;
    }

}


void merge_sort(int arr[], int low, int high){
    if(low < high){
        int mid = (low+high)/2;
        merge_sort(arr, low, mid);
        merge_sort(arr, mid+1, high);
        merge(arr, low, mid, high);
    }
}

int main(){
    int n = 8;
    int arr[] = {38, 2, 34, 12, 100, 5, 15, 2};
    cout << "Unsorted array: ";
    print_array(arr, n);
    merge_sort(arr, 0, n-1);
    cout << "\nSorted array: ";
    print_array(arr, n);
}