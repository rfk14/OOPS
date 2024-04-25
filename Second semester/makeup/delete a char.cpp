#include <iostream>
#include <string>
using namespace std;

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    int count_deleted = 0;
    string new_sentence = "";

    // Construct the new sentence without '@' characters and count the number of deletions
    for (int i = 0; i < sentence.length(); ++i) {
        char c = sentence[i];
        if (c != '@') {
            new_sentence += c;
        } else {
            ++count_deleted;
        }
    }

    cout << "New sentence: " << new_sentence << "; @. ";
    cout << "The char @ is deleted: " << count_deleted << " times." << endl;

    return 0;
}

