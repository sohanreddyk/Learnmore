#include<iostream>
using namespace std;
int main()
{
    int marks[3];
    // Input marks for 3 students
    for(int i = 0; i < 3; i++) {
        cout << "Enter marks for student " << i + 1 << ": ";
        cin >> marks[i];
    }

    // Print grades for each student
    for(int i = 0; i < 3; i++) {
        cout << "Student " << i + 1 << " grade: ";
        if (marks[i] >= 40 && marks[i] < 50) {
            cout << "A" << endl;
        }
        else if (marks[i] >= 30 && marks[i] < 40) {
            cout << "B" << endl;
        }
        else if (marks[i] >= 20 && marks[i] < 30) {
            cout << "C" << endl;
        }
        else {
            cout << "F" << endl;
        }
    }
    return 0;
}
