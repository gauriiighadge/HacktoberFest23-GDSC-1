#include <iostream>
#include <string>
using namespace std;

int main()
{
      string sentence;
      int noOfVowels=0;
      cout << "Enter the sentence : " << endl;
      cin.ignore(); // for clearing new line characters
      getline(cin, sentence); // for accepting spaces in sentence

      for (int i = 0; i <= sentence.length(); i++)
      {
            if (sentence[i] == 'a' || sentence[i] == 'e' || sentence[i] == 'i' || sentence[i] == 'o' || sentence[i] == 'u' && 
            sentence[i] == 'A' || sentence[i] == 'E' || sentence[i] == 'I' || sentence[i] == 'O' || sentence[i] == 'U')
            {     
                  //If condition satisfies it will increment the noOfVowels which is set to 0.
                  noOfVowels++;
            }
      }

      // It prints final no. of vowels
      cout << "No. of vowels are " << noOfVowels<< endl;

      return 0;
}

