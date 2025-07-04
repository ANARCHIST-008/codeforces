/*You have a matrix 2×2
 filled with distinct integers. You want your matrix to become beautiful. The matrix is beautiful if the following two conditions are satisfied:

in each row, the first element is smaller than the second element;
in each column, the first element is smaller than the second element.

You can perform the following operation on the matrix any number of times: rotate it clockwise by 90
 degrees, so the top left element shifts to the top right cell, the top right element shifts to the bottom right cell, and so on:


Determine if it is possible to make the matrix beautiful by applying zero or more operations.

Input
The first line contains one integer t
 (1≤t≤1000
) — the number of test cases.

Each test case consists of two lines. Each of those lines contains two integers — the elements of the corresponding row of the matrix. In each matrix, all four elements are distinct integers from 1
 to 100
.

Output
For each test case, print YES if the matrix can become beautiful, or NO otherwise. You may print each letter in any case (YES, yes, Yes will all be recognized as positive answer, NO, no and nO will all be recognized as negative answer).*/


#include <iostream>
#include <vector>
using namespace std;

// Function to rotate the matrix 90 degrees clockwise
void rotate(vector<vector<int>>& mat) {
    int temp = mat[0][0];
    mat[0][0] = mat[1][0];
    mat[1][0] = mat[1][1];
    mat[1][1] = mat[0][1];
    mat[0][1] = temp;
}

// Function to check if matrix is beautiful
bool isBeautiful(const vector<vector<int>>& mat) {
    return (mat[0][0] < mat[0][1]) && 
           (mat[1][0] < mat[1][1]) && 
           (mat[0][0] < mat[1][0]) && 
           (mat[0][1] < mat[1][1]);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        vector<vector<int>> mat = {{0, 0}, {0, 0}};
        
        // Read input
        cin >> mat[0][0] >> mat[0][1] >> mat[1][0] >> mat[1][1];
        
        bool beautiful = false;
        for (int i = 0; i < 4; i++) {
            if (isBeautiful(mat)) {
                beautiful = true;
                break;
            }
            rotate(mat);
        }
        
        cout << (beautiful ? "YES" : "NO") << endl;
    }
    return 0;
}