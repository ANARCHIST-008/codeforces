/*You are given an array of integers a1,a2,…,an
. An array x1,x2,…,xm
 is beautiful if there exists an array y1,y2,…,ym
 such that the elements of y
 are distinct (in other words, yi≠yj
 for all 1≤i<j≤m
), and the product of xi
 and yi
 is the same for all 1≤i≤m
 (in other words, xi⋅yi=xj⋅yj
 for all 1≤i<j≤m
).

Your task is to determine the maximum size of a subsequence∗
 of array a
 that is beautiful.

∗
A sequence b
 is a subsequence of a sequence a
 if b
 can be obtained from a
 by the deletion of several (possibly, zero or all) element from arbitrary positions.

Input
Each test contains multiple test cases. The first line contains the number of test cases t
 (1≤t≤500
). The description of the test cases follows.

The first line of each test case contains a single integer n
 (1≤n≤100
) — the length of the array a
.

The second line of each test case contains n
 integers a1,a2,…,an
 (1≤ai≤n
) — the elements of array a
.

Note that there are no constraints on the sum of n
 over all test cases.

Output
For each test case, output the maximum size of a subsequence of array a
 that is beautiful.*/


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
        unordered_set<int> temp;
        for(int i = 0;i < n;i++){
            int e;
            cin >> e;
            temp.insert(e);
        }

        if(temp.size() == n){
            cout << n << endl;
        }else{
            cout << temp.size() << endl;
        }

    }
}