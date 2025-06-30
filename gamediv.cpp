/*You are given an array of integers a1,a2,…,an
 of length n
 and an integer k
.

Two players are playing a game. The first player chooses an index 1≤i≤n
. Then the second player chooses a different index 1≤j≤n,i≠j
. The first player wins if |ai−aj|
 is not divisible by k
. Otherwise, the second player wins.

We play as the first player. Determine whether it is possible to win, and if so, which index i
 should be chosen.

The absolute value of a number x
 is denoted by |x|
 and is equal to x
 if x≥0
, and −x
 otherwise.

Input
Each test contains multiple test cases. The first line of input contains a single integer t
 (1≤t≤100
) — the number of test cases. The description of the test cases follows.

The first line of each test case contains two integers n
 and k
 (1≤n≤100
; 1≤k≤100
) — the length of the array and the number k
.

The second line of each test case contains n
 integers a1,a2,…,an
 (1≤ai≤100
) — the elements of the array a
.

Output
For each test case, if it is impossible for the first player to win, print "NO" (without quotes).

Otherwise, print "YES" (without quotes) and on the next line the appropriate index 1≤i≤n
. If there are multiple solutions, print any of them.

You can output each letter in any case (lowercase or uppercase). For example, the strings "yEs", "yes", "Yes" and "YES" will be recognized as a positive answer.*/



#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t; // Number of test cases
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        int a[100];

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        bool found = false;
        int chosenIndex = -1;

        for (int i = 0; i < n; i++) {
            bool valid = true; 
            for (int j = 0; j < n; j++) {
                if (i != j && abs(a[i] - a[j]) % k == 0) {
                    valid = false;
                    break;
                }
            }
            if (valid) {
                found = true;
                chosenIndex = i + 1; 
                break; 
            }
        }

        if (found) {
            cout << "YES" << endl;
            cout << chosenIndex << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
