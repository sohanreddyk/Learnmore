#include<iostream>
using namespace std;
int main()
{
    int arr[2];
    for(int i = 0; i < 2; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> arr[i];
    }
    if(arr[0] > arr[1]) {
        cout << "First number is greater than second number." << endl;
    }
    else if(arr[0] < arr[1]) {
        cout << "Second number is greater than first number." << endl;
    }
    else {
        cout << "Both numbers are equal." << endl;
    }
    return 0;
}