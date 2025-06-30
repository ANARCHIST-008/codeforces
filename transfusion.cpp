/*You are given an array a
 of length n
. In one operation, you can pick an index i
 from 2
 to n−1
 inclusive, and do one of the following actions:

Decrease ai−1
 by 1
, then increase ai+1
 by 1
.

Decrease ai+1
 by 1
, then increase ai−1
 by 1
.
After each operation, all the values must be non-negative. Can you make all the elements equal after any number of operations?

Input
First line of input consists of one integer t
 (1≤t≤104
)  — the number of test cases.

First line of each test case consists of one integer n
 (3≤n≤2⋅105
).

Second line of each test case consists of n
 integers ai
 (1≤ai≤109
).

It is guaranteed that the sum of n
 of all test cases doesn't exceed 2⋅105
.

Output
For each test case, print "YES" without quotation marks if it is possible to make all the elements equal after any number of operations; otherwise, print "NO" without quotation marks.

You can print answers in any register: "yes", "YeS", "nO"  — will also be considered correct.*/


#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a;
        for(int i = 0; i < n; i++){
            int element;
            cin >> element;
            a.push_back(element);
        }

        int sum = 0;

        for(int i = 0; i < n; i++){
            sum = sum + a[i];
        }

        if(sum % n == 0){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }

}