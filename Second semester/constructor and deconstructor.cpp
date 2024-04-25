#include <iostream>
#include <cstring>
using namespace std;

class computer {
public:
    char* producer;
    string type;
    string processor;
    int RAM;
    computer(char* prod = (char*)"dell", string ty = "laptop",
        string proc = "Intel5", int ram = 8)
    {
        int n = strlen(prod);
        this->producer = new char[n + 1];
       // strcpy(producer, prod);
        for (int i = 0; i < n; i++)
            producer[i] = prod[i];
        
        producer[n] = '\0';

        type = ty;
        processor = proc;
        RAM = ram;
    }

    computer(computer& right)
    {
        int n = strlen(right.producer);
        producer = new char[n + 1];
       for (int i=0; i<n; i++)
           producer[i]= right.producer[i];
        producer[n] = '\0';

        type = right.type;
        processor = right.processor;
        RAM = right.RAM;
    }

    ~computer()
    {
        delete[]producer;
    }

    void input()
    {
        cout << "\nInput the producer: \n";
        cin >> producer;
        cout << "\nInput the type: \n";
        cin >> type;
        cout << "\nInput the processor: \n";
        cin >> processor;
        cout << "\nInput the RAM: \n";
        cin >> RAM;
    }

    void output() {
        cout << "\nComputers details: \n"
            << producer << "  " << type << "  "
            << processor << "  " << RAM << endl;
    }

};
int main()
{
    computer comp1, comp2((char*)"assus"), comp3((char*)"HP", "hendheld"),
        comp4((char*)"lenovo", "desktop", "Intel7", 16);
    computer comp5(comp1);

    cout << "\nComputer 1 data: \n"
        << comp1.producer << "  " << comp1.type
        << "  " << comp1.processor
        << "  " << comp1.RAM << endl;


    cout << "\nComputer 2 data: \n"
        << comp2.producer << "  " << comp2.type
        << "  " << comp2.processor
        << "  " << comp2.RAM << endl;


    cout << "\nComputer 5 data: \n"
        << comp5.producer << "  " << comp5.type
        << "  " << comp5.processor
        << "  " << comp5.RAM << endl;
    cout << "\nInput computer1 producer: ";
    cin >> comp1.producer;

    cout << "\n-----------------------------\n";
    cout << "\nComputer 1 data: \n"
        << comp1.producer << "  " << comp1.type
        << "  " << comp1.processor
        << "  " << comp1.RAM << endl;

    cout << "\nComputer 5 data: \n"
        << comp5.producer << "  " << comp5.type
        << "  " << comp5.processor
        << "  " << comp5.RAM << endl;

    return 0;
}


