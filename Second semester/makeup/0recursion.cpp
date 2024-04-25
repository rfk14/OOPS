#include <iostream>
using namespace std;

// Recursive function to check if digits satisfy the condition
bool checkCondition(int num, int prevDigit) {
    // Base case: if num becomes 0, return true
    if (num == 0) {
        return true;
    }

    // Extract the last digit
    int lastDigit = num % 10;

    // Check if the current digit is greater than the previous digit
    if (lastDigit > prevDigit) {
        // Recursively check the remaining digits
        return checkCondition(num / 10, lastDigit);
    } else {
        // If current digit is not greater than the previous digit, return false
        return false;
    }
}

int main() {
    // Input number
    int num;
    cout << "Enter a number: ";
    cin >> num;

    // Call the recursive function to check the condition
    if (checkCondition(num / 10, num % 10)) {
        cout << "The number digits match the condition" << endl;
    } else {
        cout << "The number digits do not match the condition" << endl;
    }

    return 0;
}

