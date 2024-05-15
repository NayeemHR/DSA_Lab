#include <iostream>
using namespace std;

int binarySearch(int arr[], int left, int right, int key) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key)
            return mid; // If key is found, return its index
        else if (arr[mid] < key)
            left = mid + 1; // If key is greater, search in the right half
        else
            right = mid - 1; // If key is smaller, search in the left half
    }
    return -1; // If key is not found, return -1
}

int main() {
    int arr[] = {5, 8, 10, 15, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 15;
    int result = binarySearch(arr, 0, n - 1, key);
    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found" << endl;
    return 0;
}
