/*Ball is the teacher in Paperfold University. The seats of his classroom are arranged in 2
 rows with m
 seats each.

Ball is teaching a+b+c
 monkeys, and he wants to assign as many monkeys to a seat as possible. Ball knows that a
 of them only want to sit in row 1
, b
 of them only want to sit in row 2
, and c
 of them have no preference. Only one monkey may sit in each seat, and each monkey's preference must be followed if it is seated.

What is the maximum number of monkeys that Ball can seat?

Input
The first line contains an integer t
 (1≤t≤104
) — the number of test cases.

Each test case contains four integers m
, a
, b
, and c
 (1≤m,a,b,c≤108
).

Output
For each test case, output the maximum number of monkeys you can seat.*/

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int m, a, b, c;
        cin >> m >> a >> b >> c;

        int no_of_monkeys;
        int seated_a = min(a, m);
        int seated_b = min(b, m);

        int remaining_seats_row1 = m - seated_a;
        int remaining_seats_row2 = m - seated_b;

        int total_empty_after_ab = remaining_seats_row1 + remaining_seats_row2;

        int seated_c = min(total_empty_after_ab, c);

        no_of_monkeys = seated_a + seated_b + seated_c;

        cout << no_of_monkeys << endl;
    }
}