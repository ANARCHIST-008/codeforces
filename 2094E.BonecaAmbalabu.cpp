/*Boneca Ambalabu gives you a sequence of n
 integers a1,a2,…,an
.

Output the maximum value of (ak⊕a1)+(ak⊕a2)+…+(ak⊕an)
 among all 1≤k≤n
. Note that ⊕
 denotes the bitwise XOR operation.

Input
The first line contains an integer t
 (1≤t≤104
) – the number of independent test cases.

The first line of each test case contains an integer n
 (1≤n≤2⋅105
) – the length of the array.

The second line of each test case contains n
 integers a1,a2,…,an
 (0≤ai<230
).

It is guaranteed that the sum of n
 over all test cases does not exceed 2⋅105
.

Output
For each test case, output the maximum value on a new line.*/


#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<int> v;
        for(int i = 0;i < n;i++){
            int e;
            cin >> e;
            v.push_back(e);
        }

        int max_sum = 0;

        for(int each : v){
            int sum = 0;
            for(int e : v){
                sum = sum + (each ^ e);
            }
            if(sum > max_sum){
                max_sum = sum;
            }
        }
        cout << max_sum << endl;
    }
    
}