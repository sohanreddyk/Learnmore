#include<iostream>
using namespace std;

void secondLargest(int arr[], int size){
    if (size < 2) {
        cout << "Array must have at least two elements." << endl;
        return;
    }
    int first = INT_MIN, second = INT_MIN;
    for (int i = 0; i < size; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }
    if (second == INT_MIN) {
        cout << "No second largest element (all elements are equal)." << endl;
    } else {
        cout << "Second largest element is: " << second << endl;
    }
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    secondLargest(arr, n);
    return 0;
}