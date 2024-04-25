#include <iostream>
#include <climits> // For INT_MAX
using namespace std;

int main() {
    int row = 3, col = 3;
    int num[row][col] = {{2, 3, 4}, 
                         {5, 6, 7}, 
                         {6, 7, 8}};
    
    int min = INT_MAX; // Initialize min with the maximum possible value

    // Iterate over the elements below the main diagonal
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j <i+1; ++j) {
            if (min > num[i][j]) {
                min = num[i][j];
            }
        }
    }

    // Check if any element below the main diagonal was found
    if (min == INT_MAX) {
        cout << "No elements found below the main diagonal." << endl;
    } else {
        cout << "Min is: " << min << endl;
    }

    return 0;
}

