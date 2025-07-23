#include<iostream>
using namespace std;
void pointerDemo() {
    cout<<"Enter the number :";
    int num;
    cin >> num;
    int* ptr = &num; // Pointer to num
    cout << "Value of num: " << num << endl;
    cout << "Address of num: " << &num << endl;
    cout << "Value of ptr: " << ptr << endl;    
    cout << "Value pointed to by ptr: " << *ptr << endl;
}
int main()
{
    pointerDemo();
    return 0;

}