/*Saturnita's mood depends on an array a
 of length n
, which only he knows the meaning of, and a function f(k,a,l,r)
, which only he knows how to compute. Shown below is the pseudocode for his function f(k,a,l,r)
.

function f(k, a, l, r):
   ans := 0
   for i from l to r (inclusive):
      while k is divisible by a[i]:
         k := k/a[i]
      ans := ans + k
   return ans
You are given q
 queries, each containing integers k
, l
, and r
. For each query, please output f(k,a,l,r)
.

Input
The first line contains an integer t
 (1≤t≤104
) — the number of test cases.

The first line of each test case contains two integers n
 and q
 (1≤n≤105,1≤q≤5⋅104
).

The following line contains n
 integers a1,a2,…,an
 (2≤ai≤105
).

The following q
 lines each contain three integers k
, l
, and r
 (1≤k≤105,1≤l≤r≤n
).

It is guaranteed that the sum of n
 does not exceed 105
 over all test cases, and the sum of q
 does not exceed 5⋅104
 over all test cases.

Output
For each query, output the answer on a new line.*/

#include<iostream>
#include<vector>
using namespace std;

int function(int k, vector<int> a, int l, int r){
    int ans = 0;
    for(int i = l;i <= r;i++){
        while(k % a[i] == 0){
            k = k / a[i];
        }
        ans = ans + k;
    }

    return ans;
}


int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        int q;
        cin >> n >> q;
        vector<int> a;
        for(int i = 0;i < n;i++){
            int e;
            cin >> e;
            a.push_back(e);
        }
        for(int i = 0;i < q;i++){
            int k;
            int l;
            int r;
            cin >> k >> l >> r;

            l--;
            r--;

            int output = function(k, a, l, r);
            cout << output << endl;

        }
    }
}



//runtime exceeded the limit for this question but the solution works 