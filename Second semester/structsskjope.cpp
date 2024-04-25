#include<iostream>
#include<string>
using namespace std;
struct Sibling
{
	string name;
	string type;
	int order;
};
int main()
{
	Sibling s1, s2;
	cout << "Enter name, type(brother or sister), and order for s1: ";
	cin >> s1.name >> s1.type >> s1.order;
	cout << "Enter name, type(brother or sister), and order for s2: ";
	cin >> s2.name >> s2.type >> s2.order;

	if (s1.type == "sister")
	{
		cout << "Name: " << s1.name << endl;
		cout << "Type: " << s1.type << endl;
		cout << "Order: " << s1.order << endl;
	}

	if (s2.type == "sister")
	{
		cout << "Name: " << s2.name << endl;
		cout << "Type: " << s2.type << endl;
		cout << "Order: " << s2.order << endl;
	}
	
	return 0;
}
