/*Define:
a function modify() that a given sentence ( ana array of chars) each space ‘ ‘ will replace with an ‘*’
a function count() to count and return the number of  digits in a given number n as input parameter
a function reverse () to find and return the reverse  number of a given number n as input parameter
a function perfect() to find and return true if a given number n as input parameter is  a perfect number ( a number is perfect if the number is = to the sum of its’ factors ( devisors))
*/
#include <iostream>
#include <cmath>
using namespace std;
void modify(char *p);
int count (int );
void modifyn (int &n);
int revers ( int  );
bool perfect(int n);
int main  ()
{
	int n;
	cout<<"jepe n: ";
	cin>>n;
	cout<<"\nnr ka: "<<count(n)<<" shifra: ";
	modifyn (n);
	cout<<"\n nr i modifikuar: "<<n;

	char fjali []="\nHello world, we are prorgamiming";
	cout<<"\n Fjalia para modifikimit"<<fjali;
	modify(fjali);
	cout<<"\nFjalia pas modifikimit fjalia: "<<fjali;


    for (int j = 1; j <= 1000; j++)
        if (perfect(j))
            cout << endl << j << "perfect";

	int m;
	cout<<"\njepe vleren per revers: ";
	cin>>m;
	cout<<"\n reversi eshte: "<<revers(m);


	cin.get();cin.get();
	return 0;
}
int count(int n)
{
	int c=0;
	while (n!=0){
		n=n/10;
		c++;}
	return c;
}
void modifyn (int &n)
{
	int  m=n, d=count(n);
	int f=n%10;
	int p=n/pow(10.0,d-1);

	n=f*pow(10.0,d-1)+ ((m/10)%static_cast <int> (pow(10.0,d-2)))*10+p;

}
void modify(char *p)
{
	for ( ;*p!='\0';p++)
	{
		if ((*p)==' ')
			*p='*';
	}

}
int revers (int nr)
{
	int rev=0;
	while (nr!=0)
	{
		int rem=nr%10;
		nr=nr/10;
		rev=rev*10+rem;

	}
	return rev;

}

bool perfect(int n) {

int s = 0;

    for (int i = 1; i <= n / 2; i++)

    if (n%i == 0)

            s = s + i;

            if (n == s) { 

        return true;

    }

        else

        return false;

}

