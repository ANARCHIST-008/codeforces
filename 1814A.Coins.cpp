/*In Berland, there are two types of coins, having denominations of 2
 and k
 burles.

Your task is to determine whether it is possible to represent n
 burles in coins, i. e. whether there exist non-negative integers x
 and y
 such that 2⋅x+k⋅y=n
.

Input
The first line contains a single integer t
 (1≤t≤104
) — the number of test cases.

The only line of each test case contains two integers n
 and k
 (1≤k≤n≤1018
; k≠2
).

Output
For each test case, print YES if it is possible to represent n
 burles in coins; otherwise, print NO. You may print each letter in any case (YES, yes, Yes will all be recognized as positive answer, NO, no and nO will all be recognized as negative answer).*/



#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        int k;
        cin >> n >> k;
        int x = 0;
        int y = 0;
        while(1){
            if(2*x + k*y == n){
                cout << "YES" << endl;
                break;
            }
            x++;
            y++;
        }

    }
}