#include <iostream>

using namespace std;

int main() {
    int number;
    
    // Asking user to input a 2-digit number
    cout << "Enter a two-digit number: ";
    cin >> number;
    
    // Extracting digits
    int first_digit = number / 10;
    int second_digit = number % 10;
    
    // Checking if each digit is odd or even
    string num1=(first_digit % 2 == 0 ? "even" : "Odd");
    string num2= (second_digit % 2 == 0 ? "even" : "odd") ;
    cout<<"Num 1 : ("<<first_digit<<") "<<num1<<" "<<"Num 2: ("<<second_digit<<")  "<<num2;
    
    return 0;
}

