/*
CSE 252
Data Structures and Algorithms I Lab

The purpose of this lab is to understand and perform basic array
operations like traverse, insert, delete
*/

#include <iostream>

using namespace std;

void traverseArray(int a[], int n);
void insertArray(int a[], int n, int value, int pos);
void deleteArray(int a[], int n, int pos);

int main()
{
    int arr[100], n;

    /* Copy and paste this input:
    10
    0 1 2 3 4 5 6 7 8 9
    */
    cout << "Array length: ";
    cin >> n;
    cout << "Array: ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    cout << "Original Array: ";
    traverseArray(arr, n);

    cout << "Array after insertion: ";
    insertArray(arr, n, 11, 5);
    n++;
    traverseArray(arr, n);

    cout << "Array after deletion: ";
    deleteArray(arr, n, 2);
    n--;
    traverseArray(arr, n);

}


void traverseArray(int a[], int n){
    // Traverses and displays the elements of an array.

    /* Subtask 01
    Write a for loop to display the array elements*/

    cout << endl;
}

void insertArray(int a[], int n, int value, int pos){
    // Inserts value at index pos of array a.

    /* Subtask 02
    Using for loop, shift the values of a[] to the right till position pos.
    Start from the last element of the array*/

    /* Subtask 03
    Update the array at index pos*/
}

void deleteArray(int a[], int n, int pos){
    // Deletes the element at index pos

    /* Subtask 04
    Using for loop, shift the values of a[] to the left,
    starting from index pos. */

}

