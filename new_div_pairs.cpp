/*Polycarp has two favorite integers x
 and y
 (they can be equal), and he has found an array a
 of length n
.

Polycarp considers a pair of indices ⟨i,j⟩
 (1≤i<j≤n
) beautiful if:

ai+aj
 is divisible by x
;
ai−aj
 is divisible by y
.
For example, if x=5
, y=2
, n=6
, a=
[1,2,7,4,9,6
], then the only beautiful pairs are:

⟨1,5⟩
: a1+a5=1+9=10
 (10
 is divisible by 5
) and a1−a5=1−9=−8
 (−8
 is divisible by 2
);
⟨4,6⟩
: a4+a6=4+6=10
 (10
 is divisible by 5
) and a4−a6=4−6=−2
 (−2
 is divisible by 2
).
Find the number of beautiful pairs in the array a
.
Input
The first line of the input contains a single integer t
 (1≤t≤104
) — the number of test cases. Then the descriptions of the test cases follow.

The first line of each test case contains three integers n
, x
, and y
 (2≤n≤2⋅105
, 1≤x,y≤109
) — the size of the array and Polycarp's favorite integers.

The second line of each test case contains n
 integers a1,a2,…,an
 (1≤ai≤109
) — the elements of the array.

It is guaranteed that the sum of n
 over all test cases does not exceed 2⋅105
.

Output
For each test case, output a single integer — the number of beautiful pairs in the array a
.*/


#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t;
    cin >> t;

    while(t--){
        int n, x, y;
        vector<int> a;
        cin >> n >> x >> y;

        for(int i = 0; i < n; i++){
            int element;
            cin >> element;
            a.push_back(element);
        }

        int count = 0;

        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                int sum = 0;
                int sub = 0;
                sum = a[i] + a[j];
                sub = a[j] - a[i];
                if(sum % x == 0 && sub % y == 0){
                    count = count + 1;
                }
            }
        }

        a.clear();

        cout << count << endl;
    }
}