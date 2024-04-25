#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <string>
using namespace std;

class computer {
public:
    char* producer; // Pointer to store producer name
    string type;    // String to store computer type
    string processor; // String to store processor type
    int RAM;        // Integer to store RAM size

    // Constructor with default values for producer, type, processor, and RAM
    computer(char* prod = (char*)"DELL", string t = "Laptop",
        string proc = "Intel7", int ram = 16)
    {
        int i;
        // Dynamically allocate memory for producer
        producer = new char[strlen(prod) + 1];
        // Copy characters from prod to producer
        for (i = 0; prod[i] != '\0'; i++)
            producer[i] = prod[i];
        producer[i] = '\0'; // Add null terminator

        // Assign values to other attributes
        type = t;
        processor = proc;
        RAM = ram;
    }

    // Copy constructor
    computer(const computer& c)
    {
        int i;
        // Dynamically allocate memory for producer
        producer = new char[strlen(c.producer) + 1];
        // Copy characters from c.producer to producer
        for (i = 0; c.producer[i] != '\0'; i++)
            producer[i] = c.producer[i];
        producer[i] = '\0'; // Add null terminator

        // Copy values of other attributes
        type = c.type;
        processor = c.processor;
        RAM = c.RAM;
    }

    // Function to input data for computer object
    void input()
    {
        cout << "\nEnter producer:";
        cin >> producer;
        cout << "\nEnter type:";
        cin >> type;
        cout << "\nEnter processor:";
        cin >> processor;
        cout << "\nEnter RAM:";
        cin >> RAM;
    }

    // Function to output data of computer object
    void output()
    {
        cout << "\nComputer: \n"
            << type << "\t" << producer << "\t" << processor
            << "\t" << RAM << endl;
    }
};

// Function to find and print laptops from an array of computers
void findLaptopComps(computer comps[], int n)
{
    cout << "\nLaptops:\n";
    for (int i = 0; i < n; i++)
        if (comps[i].type == "Laptop" || comps[i].type == "laptop")
            comps[i].output();
}

// Function to find and print computers with Intel7 processors from an array of computers
void findIntel7Laptops(computer comps[], int n)
{
    cout << "\nIntel7 Laptops:\n";
    for (int i = 0; i < n; i++)
        if (((comps[i].type == "Laptop" || comps[i].type == "laptop"))
            && comps[i].processor == "Intel7")
            comps[i].output();
}

// Function to find and return computer with the highest RAM from an array of computers
computer findMaxRamComputer(computer comps[], int n)
{
    computer max = comps[0];
    for (int i = 1; i < n; i++)
        if (comps[i].RAM > max.RAM)
            max = comps[i];
    return max;
}

int main()
{
    computer comps[15]; // Array to store computer objects
    int n = 3; // Number of computers to input

    cout << "\nInitial data:\n";
    for (int i = 0; i < 15; i++)
        cout << comps[i].producer << " " << comps[i].type << " "
        << comps[i].processor << " " << comps[i].RAM << endl;

    cout << "\nEnter new data:\n";
    for (int i = 0; i < n; i++)
        comps[i].input(); // Input data for each computer object

    findLaptopComps(comps, n); // Find and print laptops
    findIntel7Laptops(comps, n); // Find and print computers with Intel7 processor
    cout << "\nComputer with the highest RAM:\n";
    findMaxRamComputer(comps, n).output(); // Find and print computer with the highest RAM

    return 0;
}

