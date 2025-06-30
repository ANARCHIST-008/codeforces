/*A. Utilize C++ STL to solve the following (K5)
There are n block towers, numbered from 1 to n. The i-th tower consists of aᵢ blocks.

In one move, you can move one block from tower i to tower j, but only if aᵢ > aⱼ. That move increases aⱼ by 1 and decreases aᵢ by 1.
You can perform as many moves as you would like (possibly, zero).

What’s the largest amount of blocks you can have on tower 1 after the moves?

Input
The first line contains a single integer t (1 ≤ t ≤ 10⁴) — the number of test cases.
The first line of each test case contains a single integer n (2 ≤ n ≤ 2 × 10⁵) — the number of towers.
The second line contains n integers a₁, a₂, ..., aₙ (1 ≤ aᵢ ≤ 10⁹) — the number of blocks on each tower.
The sum of n over all test cases does not exceed 2 × 10⁵.
Output
For each test case, print the largest amount of blocks you can have on tower 1 after you make any number of moves (possibly, zero). ​*/


#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int solve(vector<int>& a, int size);

void sort(vector<int>& a, int size);

int main(){
    int t;
    cin >> t;
    while(t--){
        vector<int> arr;
        int n;
        cin >> n;
        int max = 0;
        for(int i = 0;i < n;i++){
            int e;
            cin >> e;
            arr.push_back(e);
        }
        sort(arr, arr.size());

        cout << solve(arr, n) << endl;
    }    
}


int solve(vector<int>& a, int size){
    for(int i = 0;i < size; i++){
        while(a[0] < a[i]){
            a[0] = a[0] + 1;
            a[i] = a[i] - 1;
        }
    }
    int max_blocks = a[0];
    return max_blocks;
}

void sort(vector<int>& a, int size){
    sort(a+1, a.size() + a);
}