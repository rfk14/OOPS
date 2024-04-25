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
	void input()
	{
		cout << "Enter file extention: ";
		cin >> extention;
		cout << "Enter file name: ";
		cin >> name;
		cout << "Enter Capacity in MB: ";
		cin >>capacity;
	}
};
void printFiles(File file[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (file[i].extention == ".exe" && file[i].capacity >= 1)
		{
			file[i].print();
		}
	}
}
int maxCapacity(File file[], int n)
{
	int max = file[0].capacity;
	for (int i = 0; i < n; i++)
	{
		if (file[i].capacity > max)
		{
			max = file[i].capacity;
		}
	}
	return max;
}

int main()
{
	File file[10];
	int n;
	cout << "enter amount of files to read: ";
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		file[i].input();
	}

	printFiles(file, n);

	cout<<"Maximum capacity from given files: "<<maxCapacity(file,n)<<endl;

	return 0;
}
