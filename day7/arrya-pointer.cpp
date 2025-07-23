#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the size of the array: ";
    int n;
    cin>>n;
    cout<<"Enter the elements of the array: ";
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int *ptr= arr;
    cout<<"The elements of the array are: ";
    for(int i=0;i<n;i++)
    {
        cout<<*(ptr+i)<<endl;
    }
    return 0;
}
