//demonstration of this operator
#include<iostream>
using namespace std;
class MyClass {
public:
    int value;
    MyClass(int val) : value(val) {}
    void display() {
        cout << "Value: " << this->value << endl; // Using 'this' to access member variable
    }
};
int main() {
    MyClass obj(10);
    obj.display(); // Calls display method which uses 'this' to access value
    return 0;
}
