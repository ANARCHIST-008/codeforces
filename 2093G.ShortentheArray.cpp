/*The beauty of an array b
 of length m
 is defined as max(bi⊕bj)
 among all possible pairs 1≤i≤j≤m
, where x⊕y
 is the bitwise XOR of numbers x
 and y
. We denote the beauty value of the array b
 as f(b)
.

An array b
 is called beautiful if f(b)≥k
.

Recently, Kostya bought an array a
 of length n
 from the store. He considers this array too long, so he plans to cut out some beautiful subarray from it. That is, he wants to choose numbers l
 and r
 (1≤l≤r≤n
) such that the array al…r
 is beautiful. The length of such a subarray will be the number r−l+1
. The entire array a
 is also considered a subarray (with l=1
 and r=n
).

Your task is to find the length of the shortest beautiful subarray in the array a
. If no subarray is beautiful, you should output the number −1
.

Input
The first line contains the number of test cases t
 (1≤t≤104
).

Next, there are t
 blocks of two lines:

In the first line of the block, there are two integers n
 and k
 (1≤n≤2⋅105
, 0≤k≤109
).

In the second line of the block, there is the array a
 consisting of n
 integers (0≤ai≤109
).

It is guaranteed that the sum of n
 across all tests does not exceed 2⋅105
.

Output
For each test case, you need to output a single integer — the minimum length of the segment (l,r)
 for which f(al…r)≥k
. If such a segment is not found, you should output −1
.*/


#include<iostream>
#include<vector>
using namespace std;

int *require = nullptr;


int solve(int l, int r){
    vector<int>
}


int main(){
    int t;
    cin >> t;
    while(t--){
        
        int n;
        int k;
        vector<int> v;
        cin >> n >> k;
        for(int i = 0;i < n;i++){
            int e;
            cin >> e;
            v.push_back(e);
        }





    }
}