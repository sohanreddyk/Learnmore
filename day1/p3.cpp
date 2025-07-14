#include<iomanip>
#include<iostream>
using namespace std;
int main()
{
    int r1;
    cout << "Enter radius of the circle:" << endl;
    cin >> r1;
    float pi=3.14159;
    double area = pi * r1 * r1;
    cout << "Area of the circle is: " << fixed << setprecision(2)<< area << endl;
}