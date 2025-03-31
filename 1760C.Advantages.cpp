/*There are n
 participants in a competition, participant i
 having a strength of si
.

Every participant wonders how much of an advantage they have over the other best participant. In other words, each participant i
 wants to know the difference between si
 and sj
, where j
 is the strongest participant in the competition, not counting i
 (a difference can be negative).

So, they ask you for your help! For each i
 (1≤i≤n
) output the difference between si
 and the maximum strength of any participant other than participant i
.

Input
The input consists of multiple test cases. The first line contains an integer t
 (1≤t≤1000
) — the number of test cases. The descriptions of the test cases follow.

The first line of each test case contains an integer n
 (2≤n≤2⋅105
) — the length of the array.

The following line contains n
 space-separated positive integers s1
, s2
, ..., sn
 (1≤si≤109
) — the strengths of the participants.

It is guaranteed that the sum of n
 over all test cases does not exceed 2⋅105
.

Output
For each test case, output n
 space-separated integers. For each i
 (1≤i≤n
) output the difference between si
 and the maximum strength of any other participant.*/



 /*
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr;
        for(int i = 0;i < n;i++){
            int e;
            cin >> e;
            arr.push_back(e);
        }

        for(int i = 0;i < n;i++){
            int left_max = *max_element(arr.begin(), arr.begin() + i - 1);
            int right_max = *max_element(arr.begin() + i + 1, arr.end());
            if(left_max >= right_max){
                cout << arr[i] - left_max << endl;
            }else{
                cout << arr[i] - right_max << endl;
            }
        }

    }
}


*/


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        // Find the first and second maximum
        int max1 = -1, max2 = -1;
        for (int num : arr) {
            if (num > max1) {
                max2 = max1;
                max1 = num;
            } else if (num > max2) {
                max2 = num;
            }
        }

        for (int i = 0; i < n; i++) {
            if (arr[i] == max1) {
                cout << arr[i] - max2 << " ";
            } else {
                cout << arr[i] - max1 << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}