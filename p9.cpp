// for-loops
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number:" << endl;
    cin >> n;
    cout << "The first " << n << " natural numbers are:" << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
