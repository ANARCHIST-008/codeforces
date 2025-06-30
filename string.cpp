/*You are given a string s
 of length n
 consisting of 0
 and/or 1
. In one operation, you can select a non-empty subsequence t
 from s
 such that any two adjacent characters in t
 are different. Then, you flip each character of t
 (0
 becomes 1
 and 1
 becomes 0
). For example, if s=0––0101––––
 and t=s1s3s4s5=0101
, after the operation, s
 becomes 1––0010––––
.

Calculate the minimum number of operations required to change all characters in s
 to 0
.

Recall that for a string s=s1s2…sn
, any string t=si1si2…sik
 (k≥1
) where 1≤i1<i2<…<ik≤n
 is a subsequence of s
.

Input
The first line of input contains a single integer t
 (1≤t≤104
) — the number of input test cases.

The only line of each test case contains the string s
 (1≤|s|≤50
), where |s|
 represents the length of s
.

Output
For each test case, output the minimum number of operations required to change all characters in s
 to 0
.*/


#include <iostream>
#include <vector>

using namespace std;


int main(){
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;
        int count = s.size();
        int min = 0;
        int max = 0;
        int no_of_oper = 0;
            for(int i = min; i < max; i++){
                if(s[i] == '0'){
                    s[i] = '1';
                }else if(s[i] == '1'){
                    s[i] = '0';
                }
                min = min + 1;
                max = max - 1;
                no_of_oper = no_of_oper + 1;
            }
            cout << no_of_oper << endl;
    }
}