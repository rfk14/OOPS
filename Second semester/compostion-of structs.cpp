#include<iostream>
#include<string>
using namespace std;

// Define a struct to represent a sibling
struct Sibling {
    string type; // Type of sibling (e.g., brother, sister)
};

// Define a struct to represent a friend
struct Friend {
    string name; // Friend's name
    string email; // Friend's email
    Sibling one; // First sibling
    Sibling two; // Second sibling
};

// Function to input data for an array of Friend objects
void input(Friend f[]) {
    for (int i = 0; i < 2; i++) {
        cout << "Enter friend name: ";
        cin >> f[i].name;
        cout << "Enter friend email: ";
        cin >> f[i].email;
        cout << "What two siblings do they have? ";
        cin >> f[i].one.type >> f[i].two.type; // Input sibling types
    }
}

// Function to output data for an array of Friend objects
void output(Friend f[]) {
    for (int i = 0; i < 2; i++) {
        cout << "Name: " << f[i].name << endl;
        cout << "Email: " << f[i].email << endl;
        cout << "Types of siblings: " << f[i].one.type << " " << f[i].two.type << endl;
    }
}

int main() {
    Friend f[2]; // Array of Friend objects

    // Input data for Friend objects
    input(f);

    // Output data for Friend objects
    output(f);

    // Check if any friend has a sister
    for (int i = 0; i < 2; i++) {
        if (f[i].one.type == "sister" || f[i].two.type == "sister") { // Check if either sibling is a sister
            cout << "Friend with a sister:" << endl;
            cout << "Name: " << f[i].name << endl;
            cout << "Email: " << f[i].email << endl;
            cout << "Types of siblings: " << f[i].one.type << " " << f[i].two.type << endl;
            break; // Stop searching after finding the first friend with a sister
        }
    }

    return 0;
}

