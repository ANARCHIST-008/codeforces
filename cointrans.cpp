/*Initially, you have a coin with value n
. You can perform the following operation any number of times (possibly zero):

transform one coin with value x
, where x
 is greater than 3
 (x>3
), into two coins with value ⌊x4⌋
.
What is the maximum number of coins you can have after performing this operation any number of times?

Input
The first line contains one integer t
 (1≤t≤104
) — the number of test cases.

Each test case consists of one line containing one integer n
 (1≤n≤1018
).

Output
For each test case, print one integer — the maximum number of coins you can have after performing the operation any number of times.*/

#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long int n;
        cin >> n;
        long long int no_of_coins = 1;

        if(n <= 3){
            cout << no_of_coins << endl;
        }
        
        else{
            while(n/4 >= 1){
                n = n/4;
                no_of_coins = no_of_coins * 2;
            }
            cout << no_of_coins << endl;
        }
    }
}