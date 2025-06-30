/*There is an array a
 consisting of n
 positive integers, and a positive integer k
. An array b
 is created from array a
 according to the following rules:

b
 contains n⋅k
 numbers;
the first n
 numbers of array b
 are the same as the numbers of array a
, that is, bi=ai
 for i≤n
;
for any i>n
, it holds that bi=bi−n
.
For example, if a=[2,3,1,4]
 and k=3
, then b=[2,3,1,4,2,3,1,4,2,3,1,4]
.

Given a number x
, it is required to count the number of such positions l
 (1≤l≤n⋅k
), for which there exists a position r≥l
, such that the sum of the elements of array b
 on the segment [l,r]
 is at least x
 (in other words, bl+bl+1+⋯+br≥x
).

Input
Each test consists of several test cases. The first line contains one integer t
 (1≤t≤104
) — the number of test cases. The description of the test cases follows.

The first line of each test case contains three integers n
, k
, x
 (1≤n,k≤105
; 1≤x≤1018
).

The second line of each test case contains n
 integers ai
 (1≤ai≤108
).

Additional constraints on the input:

the sum of n
 across all test cases does not exceed 2⋅105
;
the sum of k
 across all test cases does not exceed 2⋅105
.
Output
For each test case, output one integer — the number of suitable positions l
 in the array b
.*/



#include<iostream>
#include<vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n, k, x;
        cin >> n >> k >> x;
        vector<int> a;
        for(int i = 0;i < n;i++){
            int el;
            cin >> el;
            a.push_back(el);
        }

        vector<int> b(n*k);
        for(int i = 0;i < n;i++){
            b.push_back(a[i]);
        }

        for(int i = n;i < n*k;i++){
            b.push_back(b[i - n - 1]);
        }

        int count = 0;

        for(int i = 0;i < n*k - 1;i++){
            int temp_sum = 0;
            for(int j = i + 1;j < n*k;j++){
                temp_sum = temp_sum + b[j];
            }
            if(temp_sum > x){
                count++;
            }
        }

        cout << count << endl;
    }
}