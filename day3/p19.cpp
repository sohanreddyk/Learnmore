#include<iostream>
using namespace std;
int main()
{
    int x=10,y=30,z=50;
    int max=x;
    if(y>max)
    {
        max=y;
    }
    if(z>max)
    {
        max=z;
    }
    cout<<"The maximum number is "<<max<<"."<<endl;
    return 0;
}

