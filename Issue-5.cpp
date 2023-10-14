#include<iostream>
using namespace std;
#include <string>

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    int vowelCount = 0;

    
    for (char& c : sentence) {
        c = tolower(c);
    }

    for (char c : sentence) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vowelCount++;
        }
    }

    cout << "Number of vowels in the sentence: " << vowelCount <<endl;

    return 0;
}
