#include <iostream>
#include <cctype> // For isalpha function
using namespace std;

int main() {
    const int max_size = 100; // Maximum size of the array
    char input;
    char alphabetic_array[max_size];
    int count = 0;

    cout << "Enter characters (enter * to stop):\n";
   
    // Continue reading characters until '*' is entered
    while ( input != '*') { cin >> input;
        // Check if the character is alphabetic
        if (isalpha(input)) {
            // Add the alphabetic character to the array
            alphabetic_array[count++] = input;
        }
    }

    // Print the array of alphabetical characters
    cout << "Array of alphabetical characters: ";
    for (int i = 0; i < count; ++i) {
        cout << alphabetic_array[i] << " ";
    }
    cout << endl;

    // Print the number of elements in the array
    cout << "Number of elements in the array: " << count << endl;

    return 0;
}

