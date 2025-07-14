#include <iostream>
using namespace std;
int main()
{
    string str = "hello";
    string str2 = "world";
    string str3 = str + str2;
    cout << "Concatenated string: " << str3 << endl;
    str3[0] = 'H';
    cout << "Modified string: " << str3 << endl;
    return 0;
}
