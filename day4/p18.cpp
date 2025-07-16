#include<iostream>
using namespace std;
void day(int n);
int main()
{
    int n;
    cout<<"Enter the day of the weeks"<<endl;
    cin>>n;
    day(n);
    return 0;
}
void day(int n){
    switch(n){
        case 1:
            cout<<"Monday"<<endl;
            break;
        case 2:
            cout<<"Tuesday"<<endl;
            break;
        case 3:
            cout<<"Wednesday"<<endl;
            break;
        case 4:
            cout<<"Thursday"<<endl;
            break;
        case 5:
            cout<<"Friday"<<endl;
            break;
        case 6:
            cout<<"Saturday"<<endl;
            break;
        case 7:
            cout<<"Sunday"<<endl;
            break;
        default:
            cout<<"Invalid input! Please enter a number between 1 and 7."<<endl;
    }
}