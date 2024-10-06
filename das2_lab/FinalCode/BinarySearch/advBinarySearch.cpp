// log n
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int binary_search(const vector<int>& arr, int target) {
    int left = 0, right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;  // Avoid overflow in midpoint calculation

        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;  // Target not found
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    if (n <= 0) {
        cout << "Array size should be positive." << endl;
        return 1;
    }

    vector<int> arr(n);
    cout << "Enter array elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // Sort the array
    sort(arr.begin(), arr.end());

    cout << "Sorted array: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int target;
    cout << "Enter the target value: ";
    cin >> target;

    int search_result = binary_search(arr, target);

    if (search_result == -1) {
        cout << "Target value " << target << " not found." << endl;
    } else {
        cout << "Target value " << target << " found at index " << search_result << "." << endl;
    }

    return 0;
}
