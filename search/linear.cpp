#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; ++i) {
        if (arr[i] == key)
            return i; // If key is found, return its index
    }
    return -1; // If key is not found, return -1
}

int main() {
    int arr[] = {5, 8, 10, 15, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 15;
    int result = linearSearch(arr, n, key);
    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found" << endl;
    return 0;
}
