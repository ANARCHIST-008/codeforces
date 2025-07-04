/*It's another beautiful day on Farmer John's farm.

After Farmer John arrived at his farm, he counted n
 legs. It is known only chickens and cows live on the farm, and a chicken has 2
 legs while a cow has 4
.

What is the minimum number of animals Farmer John can have on his farm assuming he counted the legs of all animals?

Input
The first line contains single integer t
 (1≤t≤103
) — the number of test cases.

Each test case contains an integer n
 (2≤n≤2⋅103
, n
 is even).

Output
For each test case, output an integer, the minimum number of animals Farmer John can have on his farm.

*/


#include<iostream>
using namespace std;

int solve(int num);

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << solve(n) << endl;
    }
}


int solve(int num){
    int count = 0;
    while(num != 0){
        if(num >= 4){
            num = num - 4;
            count++;
        }else{
            num = num - 2;
            count++;
        }
    }
    return count;
}