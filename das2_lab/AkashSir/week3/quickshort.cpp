// Week 3 : Quick Sort

#include <iostream>

using namespace std;

void print_array(int arr[], int n){
    for(int i=0;i<n;i++)
        cout << arr[i] << " ";
    cout << endl;
}

int set_pivot(int arr[], int low, int high){
    int pValue = arr[high];
    int pointer = low;

    for(int i=low;i<=high-1;i++){
        if(arr[i] < pValue){
            swap(arr[i], arr[pointer]);
            pointer++;
        }
    }

    swap(arr[pointer], arr[high]);
    return pointer;


}

void quick_sort(int arr[], int low, int high){

    cout << "(" << low << ", " << high << ")\t";
    print_array(arr, 8);

    if(low<high){
        int pivot = set_pivot(arr, low, high);
        quick_sort(arr, low, pivot-1);
        quick_sort(arr, pivot+1, high);
    }
}

int main(){
    int arr[] = {7, 13, 5, 2, 1, 46, 9, 7};
    int n = sizeof(arr)/sizeof(arr[0]); // Array size
    cout << "Unsorted Array: ";
    print_array(arr, n);

    quick_sort(arr, 0, n-1);

    cout << "Sorted Array: ";
    print_array(arr, n);
}