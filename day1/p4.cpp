#include<iostream>
#include<fstream>
using namespace std;

int main ()
{
    ofstream outputFile("output.txt");
    if(outputFile.is_open()){
        outputFile<<"Sample 1\n";
        outputFile.close();
        cout << "Output written to output.txt" << endl;
    }
    else {
        cout << "Error opening file!" << endl;  
    }
}