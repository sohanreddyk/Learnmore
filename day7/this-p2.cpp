//function chaining calls using this operator
#include<iostream>
using namespace std;
class MyClass {
public:
    int value;
    MyClass(int val) : value(val) {}
    MyClass& setValue(int val) {
        this->value = val; 
        return *this; 
    }
    void display()
    {
        cout << "Value: " << this->value << endl; 
    }
    MyClass& incrementValue() {
        this->value++;
        return *this; 
    }
};
int main(){
    MyClass obj(10);
    obj.setValue(20).incrementValue().display(); 
    return 0;
}