#include<iostream>
using namespace std;
void sum(int arr[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += arr[i];
    }
    cout << "Sum of array elements: " << total << endl;
}
void average(int arr[], int size) {
    if (size == 0) {
        cout << "Array is empty, cannot calculate average." << endl;
        return;
    }
    double total = 0;
    for (int i = 0; i < size; i++) {
        total += arr[i];
    }
    cout << "Average of array elements: " << total / size << endl;
}
void maxElement(int arr[], int size) {
    if (size == 0) {
        cout << "Array is empty, cannot find maximum element." << endl;
        return;
    }
    int maxVal = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    cout << "Maximum element in the array: " << maxVal << endl;
}
int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    if (n <= 0) {
        cout << "Invalid size!" << endl;
        return 1;
    }
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    sum(arr, n);
    average(arr, n);
    maxElement(arr, n);
    
    return 0;
}
