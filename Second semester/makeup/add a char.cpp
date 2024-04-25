#include <iostream>
#include <string>
using namespace std;

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    char character_to_add;
    cout << "Enter the character to add before each word: ";
    cin >> character_to_add;

    string new_sentence = "";
    int count_words = 0;

    // Add the character before each word
    for (int i = 0; i < sentence.length(); ++i) {
        if (i == 0 || sentence[i - 1] == ' ') {
            new_sentence += character_to_add;
            ++count_words;
        }
        new_sentence += sentence[i];
    }

    cout << "New sentence with '" << character_to_add << "' before each word: " << new_sentence << endl;
    cout << "Number of words in the sentence: " << count_words << endl;

    return 0;
}

