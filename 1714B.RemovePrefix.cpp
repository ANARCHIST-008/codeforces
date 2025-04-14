/*Polycarp was presented with some sequence of integers a
 of length n
 (1≤ai≤n
). A sequence can make Polycarp happy only if it consists of different numbers (i.e. distinct numbers).

In order to make his sequence like this, Polycarp is going to make some (possibly zero) number of moves.

In one move, he can:

remove the first (leftmost) element of the sequence.
For example, in one move, the sequence [3,1,4,3]
 will produce the sequence [1,4,3]
, which consists of different numbers.

Determine the minimum number of moves he needs to make so that in the remaining sequence all elements are different. In other words, find the length of the smallest prefix of the given sequence a
, after removing which all values in the sequence will be unique.

Input
The first line of the input contains a single integer t
 (1≤t≤104
) — the number of test cases.

Each test case consists of two lines.

The first line contains an integer n
 (1≤n≤2⋅105
) — the length of the given sequence a
.

The second line contains n
 integers a1,a2,…,an
 (1≤ai≤n
) — elements of the given sequence a
.

It is guaranteed that the sum of n
 values over all test cases does not exceed 2⋅105
.

Output
For each test case print your answer on a separate line — the minimum number of elements that must be removed from the beginning of the sequence so that all remaining elements are different.

*/


#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a;
        for(int i = 0;i < n;i++){
            int e;
            cin >> e;
            a.push_back(e);
        }

        unordered_set<int> seen;
        int dups_RtoL = 0;
        for(int i = n - 1;i >= 0;i--){
            if(seen.find(a[i]) == seen.end()){
                dups_RtoL++;
                seen.insert(a[i]);
            }else{
                break;
            }
        }

        cout << n - dups_RtoL << endl;
    }
}

