#include<iostream>
using namespace std;
int main()
{
    int marks=25;
    if (marks>=40 && marks<50)
    {
        cout<<"A"<<endl;
    }
    else if (marks>=30 && marks<40)
    {
        cout<<"B"<<endl;
    }
    else if (marks>=20 && marks<30)
    {
        cout<<"C"<<endl;
    }
    else
    {
        cout<<"F"<<endl;
    }
    return 0;
}
