// if -else statements
#include <iostream>
using namespace std;
int main()
{
    int n1, n2, n3;
    cout << "Enter a number:" << endl;
    cin >> n1;
    cout << "Enter another number:" << endl;
    cin >> n2;
    if (n1 > n2)
    {
        cout << "The first number is greater than the second number." << endl;
    }
    else if (n1 < n2)
    {
        cout << "The first number is less than the second number." << endl;
    }
    else
    {
        cout << "Both numbers are equal." << endl;
    }
    return 0;
}