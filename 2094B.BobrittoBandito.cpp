/*In Bobritto Bandito's home town of residence, there are an infinite number of houses on an infinite number line, with houses at …,−2,−1,0,1,2,…
. On day 0
, he started a plague by giving an infection to the unfortunate residents of house 0
. Each succeeding day, the plague spreads to exactly one healthy household that is next to an infected household. It can be shown that each day the infected houses form a continuous segment.

Let the segment starting at the l
-th house and ending at the r
-th house be denoted as [l,r]
. You know that after n
 days, the segment [l,r]
 became infected. Find any such segment [l′,r′]
 that could have been infected on the m
-th day (m≤n
).

Input
The first line contains an integer t
 (1≤t≤100
) – the number of independent test cases.

The only line of each test case contains four integers n
, m
, l
, and r
 (1≤m≤n≤2000,−n≤l≤0≤r≤n,r−l=n
).

Output
For each test case, output two integers l′
 and r′
 on a new line. If there are multiple solutions, output any.*/



#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, m, l, r;
        cin >> n >> m >> l >> r;
        
        
        int left_growth = (m + 1) / 2; 
        int right_growth = m / 2;       
        int l_prime = -left_growth;
        int r_prime = right_growth;
        
        if (l_prime < l) {
            // Fit in Limit
            int shift = l - l_prime;
            l_prime += shift;
            r_prime += shift;
        } else if (r_prime > r) {
            // Fit in Limit
            int shift = r_prime - r;
            l_prime -= shift;
            r_prime -= shift;
        }
        
        cout << l_prime << " " << r_prime << endl;
    }
    
    return 0;
}