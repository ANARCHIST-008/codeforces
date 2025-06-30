/*Rudolf has an array a
 of n
 integers, the elements are numbered from 1
 to n
.

In one operation, he can choose an index i
 (2≤i≤n−1
) and assign:

ai−1=ai−1−1
ai=ai−2
ai+1=ai+1−1
Rudolf can apply this operation any number of times. Any index i
 can be used zero or more times.

Can he make all the elements of the array equal to zero using this operation?

Input
The first line of the input contains a single integer t
 (1≤t≤104
) — the number of test cases in the test.

The first line of each case contains a single integer n
 (3≤n≤2⋅105
) — the number of elements in the array.

The second line of each case contains n
 integers a1,a2,…,an
 (0≤aj≤109
) — the elements of the array.

It is guaranteed that the sum of the values of n
 over all test cases does not exceed 2⋅105
.

Output
For each test case, output "YES" if it is possible to make all the elements of the array zero using the described operations. Otherwise, output "NO".

You can output each letter in any case (lowercase or uppercase). For example, the strings "yEs", "yes", "Yes", and "YES" will be accepted as a positive answer.

*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        long long sum = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }

        // Check if sum is divisible by 3
        if (sum % 3 != 0) {
            cout << "NO" << endl;
            continue;
        }

        long long prefix_sum = 0;
        bool possible = true;
        for (int i = 0; i < n; i++) {
            prefix_sum += a[i];
            if (prefix_sum % 3 != 0) {
                possible = false;
                break;
            }
        }

        if (possible) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
