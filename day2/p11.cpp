// while-loop
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number:" << endl;
    cin >> n;
    cout << "The first " << n << " natural numbers are:" << endl;
    int i = 1;
    while (i <= n)
    {
        cout << i << " ";
        i++;
    }
    cout << endl;
    return 0;
}