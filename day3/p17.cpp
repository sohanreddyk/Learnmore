//leap year
#include <iostream>
using namespace std;
int main()
{
    cout<<"Enter 10 years: ";
    int year[10];
    for(int i=0; i<10; i++) 
    {
        cin>>year[i];
    }
    for(int i=0; i<10; i++)
    {
    if (year[i]%4==0)
    {
        cout<<year[i]<<" The year is a leap year."<<endl;
    }
    else
    {
        cout<<year[i]<<" The year is not a leap year."<<endl;
    }
    }
    return 0;
}