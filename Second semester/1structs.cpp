//structs
#include<iostream>
using namespace std;

struct person{
	string name;
	int age;
	char gender;
	float weight;//for experiment
	
	void print(){
		cout<<"Name "<<name<<", age "<<age<<", gender "<<gender<<endl;
	}
};

int main(){
	struct person p1,p2;
	p1.age=25;
	p1.gender='m';
	p1.name="mikaal  Alam";
	p1.print();
}
