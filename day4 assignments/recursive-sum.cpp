#include <iostream>
using namespace std;

int recursiveSum(int n) {
    if (n <= 1)
        return n;
    return n + recursiveSum(n - 1);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Sum of first " << n << " natural numbers is: " << recursiveSum(n) << endl;
    return 0;
}
