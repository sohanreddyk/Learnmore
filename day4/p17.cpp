//factorial of a number
#include<iostream>
using namespace std;
int factorial(int n);
int main()
{
    int n;
    cout << "Enter a number to find its factorial: ";
    cin >> n;
    
    if (n < 0) {
        cout << "error" << endl;
    } else {
        cout << "The factorial of " << n << " is " << factorial(n) << "." << endl;
    }
    return 0;
}
int factorial(int n){
    if(n<=1)
        return 1;
    else
        return n * factorial(n - 1);
}