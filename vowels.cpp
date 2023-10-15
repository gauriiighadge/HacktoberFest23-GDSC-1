#include <iostream>
#include <string>

int countVowels(const std::string& sentence) {
    int count = 0;
    for(char c : sentence) {
        if(tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u') {
            count++;
        }
    }
    return count;
}

int main() {
    std::string sentence;

    std::cout << "Enter a sentence: ";
    std::getline(std::cin, sentence);

    int vowelCount = countVowels(sentence);

    std::cout << "Number of vowels in the sentence: " << vowelCount << std::endl;

    return 0;
}
