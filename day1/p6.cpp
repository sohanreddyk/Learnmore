#include <iostream>
using namespace std;
int main()
{
    int n1 = 10;
    cout << "Increment of the number is: " << ++n1 << endl;
    cout << "Decrement of the number is: " << --n1 << endl;
    n1 += 20;
    cout << "Adding the number by 20. " << n1 << endl;
    n1 -= 10;
    cout << "Subtracting the number by 10. " << n1 << endl;
    return 0;
}