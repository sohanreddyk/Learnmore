#include<iostream>
using namespace std;
int main()
{
    int nums[10];
    cout<<"Enter 10 numbers: ";
    for(int i=0; i<10; i++)
    {
        cin>>nums[i];
    }
    for(int i=0; i<10; i++)
    {
    if(nums[i]%2==0)
    {
        cout<<nums[i]<<" The number is even."<<endl;
    }
    else
        cout<<nums[i]<<" The number is odd."<<endl;
    }
    return 0;
}
