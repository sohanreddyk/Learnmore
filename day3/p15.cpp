#include<iostream>
using namespace std;
int main()
{
    int age[10];
    cout<<"Enter 10 ages: ";
    for(int i=0; i<10; i++)
    {
        cin>>age[i];
    }
    for(int i=0; i<10; i++)
    {
    if(age[i]<18)
    {
        cout<<age[i]<<" You are not eliglible for liscence."<<endl;
    }
    else
        cout<<age[i]<<" You are eligible for liscence."<<endl;
    }
    return 0;
}

    
