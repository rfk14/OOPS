
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <string>
using namespace std;
class computer {
public:
	char* producer;
	string type;
	string processor;
	int RAM;

	computer(char* prod = (char*)"DELL", string t = "Laptop",
		string proc = "Intel5", int ram=16)
	{
		int i;
		producer = new char[strlen(prod)+1];
		//strcpy(producer, prod);
		for ( i = 0; prod[i] != '\0'; i++)
			producer[i] = prod[i];
		producer[i] = '\0';

		type = t;
		processor = proc;
		RAM = ram;

	}

	computer(const computer &c)
	{
		//computer c2(c1);
		// c2 = c1;
		//kompajleri interpreton c2.computer(c1);
		int i;
		producer = new char[strlen(c.producer) + 1];
		//strcpy(producer, prod);
		for (i = 0; c.producer[i] != '\0'; i++)
			producer[i] = c.producer[i];
		producer[i] = '\0';

		type = c.type;
		processor = c.processor;
		RAM = c.RAM;

	}

	void input()
	{
		cout << "\nJepe producer, type, procesor, RAM:";
		cin >> producer >> type >> processor >> RAM;
	}

	void output()
	{
		cout << "\ncomputer: "
			<< "\n" << producer << "\t" 
			<< type << "\t" << processor << "\t" << RAM;
	}
	bool isIntel7()
	{
		return (processor == "Intel7");
	}
};
int main()

{
	computer c1, c2((char*)"HP", "Desktop"), c3((char*)"Lenovo", "Laptop", "Intel7", 32);
	cout << "\nComputer c1: "
		<< c1.producer << " " << c1.type << " " 
		<< c1.processor << " "
		<< c1.RAM;

	cout << "\nComputer c2: ";
	c2.output();
	cout << "\nComputer c3: ";
	c3.output();

	computer c4(c3); 
	cout << "\nComputer c4: ";
	c4.output();

	cout << "\nJep prod per c4:";
	cin >> c4.producer;

	cout << "\nComputer c3: ";
	c3.output();

	
	cout << "\nComputer c4: ";
	c4.output();
	cout << "\nComputer me procesor Intel7: ";
	if (c1.isIntel7())
		c1.output();
	if (c2.isIntel7())
		c2.output();
	if (c3.isIntel7())
		c3.output();
	if (c4.isIntel7())
		c4.output();
}

