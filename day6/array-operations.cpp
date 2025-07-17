#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++)
    {        cin >> arr[i];
    }
    cout <<" Enter the position of the array to print: ";
    int pos;
    cin >> pos;
    if (pos >= 0 && pos < n) {
        cout << "The element at position " << pos << " is: " << arr[pos] << endl;
    } else {
        cout << "Invalid position!" << endl;
    }
    return 0;
}