#include <iostream>
using namespace std;

struct Student {
  string name;
  int age;
  char grade;
};

void printStudent(Student student) {
  cout << "Name: " << student.name << endl;
  cout << "Age: " << student.age << endl;
  cout << "Grade: " << student.grade << endl;
}

int main() {
  Student students[5];

  for (int i = 0; i < 5; i++) {
    cout << "Enter details for student " << i + 1 << ":" << endl;
    cout << "Name: ";
    getline(cin, students[i].name);
    cout << "Age: ";
    cin >> students[i].age;
    cout << "Grade: ";
    cin >> students[i].grade;
    cin.ignore(); 
  }

  cout << "\nStudent Details:\n";
  for (int i = 0; i < 5; i++) {
    printStudent(students[i]);
    cout << endl;
  }

  return 0;
}

