/*Kinich wakes up to the start of a new day. He turns on his phone, checks his mailbox, and finds a mysterious present. He decides to unbox the present.

Kinich unboxes an array a
 with n
 integers. Initially, Kinich's score is 0
. He will perform the following operation any number of times:

Select two indices i
 and j
 (1≤i<j≤n)
 such that neither i
 nor j
 has been chosen in any previous operation and ai=aj
. Then, add 1
 to his score.
Output the maximum score Kinich can achieve after performing the aforementioned operation any number of times.

Input
The first line contains an integer t
 (1≤t≤500
) — the number of test cases.

The first line of each test case contains an integer n
 (1≤n≤20
) — the length of a
.

The following line of each test case contains n
 space-separated integers a1,a2,…,an
 (1≤ai≤n
).

Output
For each test case, output the maximum score achievable on a new line.*/


#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        vector<int> v;
        int n;
        int a;
        cin >> n;
        for(int i = 0;i < n;i++){
            int e;
            cin >> e;
            v.push_back(e);
        }


        int count = 1;

        for(int i = 0;i < n;i++){
            for(int j = i;j < n;j++){
                if(v[i] == v[j]){
                    count++;
                }
            }
        }

        if(count == -2){
            cout << 0 << endl;
        }else{
            cout << count << endl;
        }

    }
}