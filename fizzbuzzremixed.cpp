/*FizzBuzz is one of the most well-known problems from coding interviews. In this problem, we will consider a remixed version of FizzBuzz:

Given an integer n
, process all integers from 0
 to n
. For every integer such that its remainders modulo 3
 and modulo 5
 are the same (so, for every integer i
 such that imod3=imod5
), print FizzBuzz.

However, you don't have to solve it. Instead, given the integer n
, you have to report how many times the correct solution to that problem will print FizzBuzz.

Input
The first line contains one integer t
 (1≤t≤104
) — the number of test cases.

Each test case contains one line consisting of one integer n
 (0≤n≤109
).

Output
For each test case, print one integer — the number of times the correct solution will print FizzBuzz with the given value of
*/


#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int count = 5 * (n / 10);

        cout << count << endl;
    }
}