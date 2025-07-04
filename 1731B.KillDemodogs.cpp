/*Demodogs from the Upside-down have attacked Hawkins again. El wants to reach Mike and also kill as many Demodogs in the way as possible.

Hawkins can be represented as an n×n
 grid. The number of Demodogs in a cell at the i
-th row and the j
-th column is i⋅j
. El is at position (1,1)
 of the grid, and she has to reach (n,n)
 where she can find Mike.

The only directions she can move are the right (from (i,j)
 to (i,j+1)
) and the down (from (i,j)
 to (i+1,j)
). She can't go out of the grid, as there are doors to the Upside-down at the boundaries.

Calculate the maximum possible number of Demodogs ans
 she can kill on the way, considering that she kills all Demodogs in cells she visits (including starting and finishing cells).

Print 2022⋅ans
 modulo 109+7
. Modulo 109+7
 because the result can be too large and multiplied by 2022
 because we are never gonna see it again!

(Note, you firstly multiply by 2022
 and only after that take the remainder.)

Input
Each test contains multiple test cases. The first line contains the number of test cases t
 (1≤t≤104
). Description of the test cases follows.

The first line of each test case contains one integer n
 (2≤n≤109
) — the size of the grid.

Output
For each test case, print a single integer — the maximum number of Demodogs that can be killed multiplied by 2022
, modulo 109+7
.*/

#include<iostream>
using namespace std;

const long long MOD = 1e9 + 7;

long long modmul(long long a, long long b) {
    return (a % MOD) * (b % MOD) % MOD;
}

long long modadd(long long a, long long b) {
    return (a % MOD + b % MOD) % MOD;
}

int main() {
    int t;
    cin >> t;

    const long long inv2 = 500000004; // Modular inverse of 2 mod 1e9+7

    while (t--) {
        long long n;
        cin >> n;

        // S1 = n(n+1)/2
        long long s1 = modmul(n, n + 1);
        s1 = modmul(s1, inv2);

        // ans = s1 + n * (s1 - 1)
        long long term = modmul(n, (s1 + MOD - 1) % MOD);
        long long total = modadd(s1, term);

        // Multiply by 2022 and take mod
        long long result = modmul(total, 2022);

        cout << result << endl;
    }
    return 0;
}
