#include <iostream>

using namespace std;

void traverseArray(int arr[], int size) {
    cout << "Array elements: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertElement(int arr[], int& size, int element, int position) {
    if (position < 0 || position > size) {
        cout << "Invalid position for insertion." << endl;
        return;
    }
    // Shift elements to the right to make space for the new element
    for (int i = size - 1; i >= position; --i) {
        arr[i + 1] = arr[i];
    }
    // Insert the new element at the specified position
    arr[position] = element;
    size++; // Increase the size of the array
}

int main() {
    int arr[10] = {1, 2, 3, 4, 5};
    int size = 5;

    cout << "Before insertion:" << endl;
    traverseArray(arr, size);

    int element, position;
    cout << "Enter the element to insert: ";
    cin >> element;
    cout << "Enter the position to insert (0 to " << size << "): ";
    cin >> position;

    insertElement(arr, size, element, position);

    cout << "After insertion:" << endl;
    traverseArray(arr, size);

    return 0;
}
