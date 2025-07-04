/*In the upcoming year, there will be many team olympiads, so the teachers of "T-generation" need to assemble a team of three pupils to participate in them. Any three pupils will show a worthy result in any team olympiad. But winning the olympiad is only half the battle; first, you need to get there...

Each pupil has an independence level, expressed as an integer. In "T-generation", there is exactly one student with each independence levels from l
 to r
, inclusive. For a team of three pupils with independence levels a
, b
, and c
, the value of their team independence is equal to (a⊕b)+(b⊕c)+(a⊕c)
, where ⊕
 denotes the bitwise XOR operation.

Your task is to choose any trio of students with the maximum possible team independence.

Input
Each test contains multiple test cases. The first line contains a single integer t
 (1≤t≤104
) — the number of test cases. The description of the test cases follows.

The first line of each test case set contains two integers l
 and r
 (0≤l,r<230
, r−l>1
) — the minimum and maximum independence levels of the students.

Output
For each test case set, output three pairwise distinct integers a,b
, and c
, such that l≤a,b,c≤r
 and the value of the expression (a⊕b)+(b⊕c)+(a⊕c)
 is maximized. If there are multiple triples with the maximum value, any of them can be output.*/

#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;


    while(t--){
        int l, r;
        cin >> l >> r;

        int max_xor = 0;
        
        int a = -1, b = -1, c = -1;

        for (int i = r; i >= max(l, r - 2); i--) {
            for (int j = i - 1; j >= max(l, r - 2); j--) {
                for (int k = j - 1; k >= max(l, r - 2); k--) {
                    int curr_xor = (i ^ j) + (j ^ k) + (k ^ i);
                    if (curr_xor > max_xor) {
                        max_xor = curr_xor;
                        a = i;
                        b = j;
                        c = k;
                    }
                }
            }
        }

        cout << a << " " << b << " " << c << endl;
    }
}