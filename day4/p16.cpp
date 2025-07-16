#include<iostream>
using namespace std;
void natural(int n);
int main()
{
    cout<<"enter n:"<<endl;
    int n;
    cin>>n;
    natural(n);
}
void natural(int n){
    cout<<"The first "<<n<<" natural numbers are:"<<endl;
    do{
        cout<<n<<" ";
        n--;
    }while(n>0);
    cout<<endl;
}