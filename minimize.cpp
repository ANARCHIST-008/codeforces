/*You are given two integers a
 and b
 (a≤b
). Over all possible integer values of c
 (a≤c≤b
), find the minimum value of (c−a)+(b−c)
.

Input
The first line contains t
 (1≤t≤55
) — the number of test cases.

Each test case contains two integers a
 and b
 (1≤a≤b≤10
).

Output
For each test case, output the minimum possible value of (c−a)+(b−c)
 on a new line.*/


#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a;
        int b;
        int c;
        cin >> a >> b;
        int min = 20;
        for(int i = 0;i <= 10;i++){
            int val = (c - a) + (b - c) ;
            if(val < min){
                min = val;
            }
        }
        cout << min << endl;
    }
}