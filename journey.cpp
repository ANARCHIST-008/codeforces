/*Monocarp decided to embark on a long hiking journey.

He decided that on the first day he would walk a
 kilometers, on the second day he would walk b
 kilometers, on the third day he would walk c
 kilometers, on the fourth day, just like on the first, he would walk a
 kilometers, on the fifth day, just like on the second, he would walk b
 kilometers, on the sixth day, just like on the third, he would walk c
 kilometers, and so on.

Monocarp will complete his journey on the day when he has walked at least n
 kilometers in total. Your task is to determine the day on which Monocarp will complete his journey.

Input
The first line contains one integer t
 (1≤t≤104
) — the number of test cases.

Each test case consists of one line containing four integers n
, a
, b
, c
 (1≤n≤109
; 1≤a,b,c≤106
).

Output
For each test case, output one integer — the day on which Monocarp will have walked at least n
 kilometers in total and will complete his journey.*/


#include <iostream>
using namespace std;

int main() {
    int test_cases;
    cin >> test_cases;

    while (test_cases--) {
        int n, a, b, c;
        cin >> n >> a >> b >> c;

        int cycle_sum = a + b + c;
        int full_cycles = n / cycle_sum;  // Number of full cycles
        int distance_covered = full_cycles * cycle_sum;
        int days_requirement = full_cycles * 3;  // Each cycle is 3 days

        // Handle remaining distance after full cycles
        if (distance_covered < n) {
            if (distance_covered + a >= n) {
                days_requirement += 1;  // First day of partial cycle
            } else if (distance_covered + a + b >= n) {
                days_requirement += 2;  // Second day of partial cycle
            } else {
                days_requirement += 3;  // Third day of partial cycle
            }
        }

        cout << days_requirement << endl;
    }

    return 0;
}
