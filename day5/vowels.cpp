//count number of vowels in a string
#include <iostream>
#include <string>
using namespace std;
int countVowels(const string& str) {
    int count = 0;
    for (char ch : str) {
        char lowerCh = tolower(ch);
        if (lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' || 
            lowerCh == 'o' || lowerCh == 'u') {
            count++;
        }
    }
    return count;
}
int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    int vowelCount = countVowels(input);
    cout << "Number of vowels in the string: " << vowelCount << endl;
    return 0;
}
//for a commit