#include<iostream>
using namespace std;
void natural(int n) {
    cout << "The first " << n << " natural numbers are:" << endl;
    for (int i = 1; i <= n; i++) {
        cout << i << " ";
    }
    cout << endl;
}
int main()
{
    int n;
    cout<<"Enter the number n:"<<endl;
    cin >> n;
    natural(n);
    return 0;
}