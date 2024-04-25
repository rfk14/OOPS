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
int main()
{
	room r1, r2, r3;
	input(r1);

	input(r2);

	input(r3);

	cout << "\nThe bedrooms are:\n";
	
	if (r1.type == "bedroom")
		output(r1);

	if (r2.type == "bedroom")
		output(r2);
	if (r3.type == "bedroom")
		output(r3);

	room max = r1;
	if (r2.width * r2.length > max.width * max.length)
		max = r2;

	if (r3.width * r3.length > max.width * max.length)
		max = r3;

	cout << "\nthe room with max surface: ";
		cout << endl << max.type << "\t" << max.width << "\t" << max.length << "\tsurface: "
		<< max.width * max.length;
	cin.get();
}

