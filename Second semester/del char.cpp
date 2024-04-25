#include <iostream>
#include <cctype>
#include <cstring>
#include <string>

using namespace std;

int main() {
	int row,col;
	cout <<"enter the number of row";
	cin >>row;
	cout <<"col ;";
	cin >>col;

	int arr[row][col];
	int min = arr[0][col -1];
	
	for (int i =0; i <row;i++){
		for (int j=0; j <col;j++){
			cout <<"element :";
			cin >>arr[i][j];
		}
	}
	
	for (int i =0; i <row;i++){
		for (int j =0; j <col;j++){
			cout <<arr[i][j] <<' ';
		}
		cout <<endl;
	}
	//min 
	for (int i =0; i <row ;i++){
		for (int j =0 ; j <col -1-i;j++){
			if (arr[i][j]< min ){
				min =arr[i][j];
			}
		}
	}
	cout <<endl;
	cout <<min;
	
    
    return 0;
}

