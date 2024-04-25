#include <iostream>
#include <string>
using namespace std;

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    int count_deleted = 0;
    // Remove '@' characters and count the number of deletions
    for (int i = 0; i < sentence.length(); ++i) {
        if (sentence[i] == 'A' || sentence[i] == 'a') {
            sentence.erase(i, 1);
            ++count_deleted;
            --i; // Decrement i to handle consecutive '@' characters
        }
    }

    cout << "New sentence: " << sentence << "; A, a. ";
    cout << "The char A or a is deleted: " << count_deleted << " times." << endl;

    return 0;
}

