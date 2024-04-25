
#include<iostream>
#include<cstring>
using namespace std;
class File
{
public:
	char* extention;
	string name;
	int capacity;

	File(const char* extention = "", string name = "noname", int capacity = 0)
	{
		this->extention = new char[strlen(extention) + 1];
		strcpy(this->extention, extention);
		this->name = name;
		this->capacity = capacity;
	}

	File(const File& other)
	{
		this->extention = new char[strlen(other.extention) + 1];
		strcpy(this->extention, other.extention);
		this->name = other.name;
		this->capacity = other.capacity;
	}

	~File()
	{
		delete[] extention;
	}

	void print()
	{
		cout << "File Extention: " << extention << endl;
		cout << "File Name: " << name << endl;
		cout << "Capacity: " << capacity << " MB" << endl;
	}
};
void input(File& files)
{
	cout << "Enter file extention: ";
	cin >> files.extention;
	cout << "Enter file name: ";
	cin >> files.name;
	cout << "Enter Capacity in MB: ";
	cin >> files.capacity;
}
int main()
{
	File file1, file2;

	cout << "Enter data for file 1: "<<endl;
	input(file1);
	cout << "Enter data for file 2: "<<endl;
	input(file2);

	if (file1.capacity > file2.capacity)
	{
		cout << "File with bigger capacity: " << endl;
		file1.print();
	}
	else
	{
		cout << "File with bigger capacity: " << endl;
		file2.print();
	}
	
	return 0;
}
