#include <iostream>

using namespace std;

void traverseArray(int arr[], int size) {
    cout << "Array elements: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void deleteElement(int arr[], int& size, int position) {
    if (position < 0 || position >= size) {
        cout << "Invalid position for deletion." << endl;
        return;
    }
    // Shift elements to the left to fill the gap left by the deleted element
    for (int i = position; i < size - 1; ++i) {
        arr[i] = arr[i + 1];
    }
    size--; // Decrease the size of the array
}

int main() {
    int arr[10] = {1, 2, 3, 4, 5};
    int size = 5;

    cout << "Before deletion:" << endl;
    traverseArray(arr, size);

    int position;
    cout << "Enter the position of the element to delete (0 to " << size - 1 << "): ";
    cin >> position;

    deleteElement(arr, size, position);

    cout << "After deletion:" << endl;
    traverseArray(arr, size);

    return 0;
}
