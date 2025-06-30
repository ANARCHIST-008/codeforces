/*Two integer arrays a
 and b
 of size n
 are complementary if there exists an integer x
 such that ai+bi=x
 over all 1≤i≤n
. For example, the arrays a=[2,1,4]
 and b=[3,4,1]
 are complementary, since ai+bi=5
 over all 1≤i≤3
. However, the arrays a=[1,3]
 and b=[2,1]
 are not complementary.

Cow the Nerd thinks everybody is interested in math, so he gave Cherry Bomb two integer arrays a
 and b
. It is known that a
 and b
 both contain n
 non-negative integers not greater then k
.

Unfortunately, Cherry Bomb has lost some elements in b
. Lost elements in b
 are denoted with −1
. Help Cherry Bomb count the number of possible arrays b
 such that:

a
 and b
 are complementary.
All lost elements are replaced with non-negative integers no more than k
.
Input
The first line of the input contains a single integer t
 (1≤t≤104
) — the number of test cases.

The first line of each test case contains two integers n
 and k
 (1≤n≤2⋅105
, 0≤k≤109
) — the size of the arrays and the maximum possible value of their elements.

The second line contains n
 integers a1,a2,...,an
 (0≤ai≤k
).

The third line contains n
 integers b1,b2,...,bn
 (−1≤bi≤k
). If bi=−1
, then this element is missing.

It is guaranteed that the sum of n
 over all test cases does not exceed 2⋅105
.

Output
Output exactly one integer, the number of ways Cherry Bomb can fill in the missing elements from b
 such that a
 and b
 are complementary.*/



#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        int k;
        cin >> n >> k;
        vector<int> a;
        vector<int> b;
        int count = 0;

        for(int i = 0;i < n;i++){
            int e;
            cin >> e;
            a.push_back(e);
        }

        for(int i = 0;i < n;i++){
            int e;
            cin >> e;
            b.push_back(e);
        }


        
    }
}