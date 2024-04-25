#include <iostream>
#include <cstring>
using namespace std;
struct room {
	string type;
	double width, length;
};
void input(room &r1)
{
	cout << "\nInput the type, width, length of the room r1:";
	cin >> r1.type >> r1.width >> r1.length;
}

void output(room r1)
{
	cout << endl << r1.type << "\t" << r1.width << "\t" << r1.length << "\tsurface: "
		<< r1.width * r1.length;
}

room Maximum(room r1, room r2, room r3)
{
	room max = r1;
	if (r2.width * r2.length > max.width * max.length)
		max = r2;

	if (r3.width * r3.length > max.width * max.length)
		max = r3;
	return max;
}
struct appartment {
	room r1, r2;
	string owner, address;
};
void outputApartment(appartment a2)
{
	cout << endl << "\nappartment details:\n"
		<< a2.r1.type << "\t" << a2.r1.width << "\t" << a2.r1.length << "\tsurface: "
		<< a2.r1.width * a2.r1.length;

	cout << endl << a2.r1.type << "\t" << a2.r1.width << "\t" << a2.r1.length << "\tsurface: "
		<< a2.r1.width * a2.r1.length;
	cout << a2.owner << "\t" << a2.address;
}
int main()
{
	
appartment a1, a2;

cout << "\nInput data about a1 (r1, r2, owner, address): ";
cout << "\nInput type, width, length of r1 for a1:";
cin >> a1.r1.type >> a1.r1.width >> a1.r1.length;
cout << "\nInput type, width, length of r2 for a1:";
cin >> a1.r2.type >> a1.r2.width >> a1.r2.length;
cout << "\nInput data for owner and address for a1:\n";
cin >> a1.owner >> a1.address;

cout << "\nInput data about a2 (r1, r2, owner, address): ";
cout << "\nInput type, width, length of r1 for a2:";
cin >> a2.r1.type >> a2.r1.width >> a2.r1.length;
cout << "\nInput type, width, length of r2 for a2:";
cin >> a2.r2.type >> a2.r2.width >> a2.r2.length;
cout << "\nInput data for owner and address for a2:\n";
cin >> a2.owner >> a2.address;


	cout << "\nData of appartments located in Sk:\n";
	if (a1.address == "Skopje" || a1.address == "skopje" || a1.address == "SKOPJE")
	{
		cout << endl << "\nappartment details:\n";
		output(a1.r1);
		output(a1.r2);
		cout << a1.owner << "\t" << a1.address;

	}
	if (a2.address == "Skopje" || a2.address == "skopje" || a2.address == "SKOPJE")
	{
		cout << endl<<"\nappartment details:\n" 
			<< a2.r1.type << "\t" << a2.r1.width << "\t" << a2.r1.length << "\tsurface: "
			<< a2.r1.width * a2.r1.length;
		
		cout << endl << a2.r1.type << "\t" << a2.r1.width << "\t" << a2.r1.length << "\tsurface: "
			<<a2. r1.width * a2.r1.length;
		cout <<endl<< a2.owner << "\t" << a2.address;

	}

	cout << "\nData of appartments that have at least one bedroom:\n";
	if (a1.r1.type == "bedroom" || a1.r2.type == "bedroom")
		outputApartment(a1);
	
	if (a2.r1.type == "bedroom" || a2.r2.type == "bedroom")
		outputApartment(a2);

	cin.get();
}

