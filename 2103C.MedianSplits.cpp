/*The median of an array b1,b2,…bm
, written as med(b1,b2,…,bm)
, is the ⌈m2⌉
-th∗
 smallest element of array b
.

You are given an array of integers a1,a2,…,an
 and an integer k
. You need to determine whether there exists a pair of indices 1≤l<r<n
 such that:

med(med(a1,a2,…,al),med(al+1,al+2,…,ar),med(ar+1,ar+2,…,an))≤k.

In other words, determine whether it is possible to split the array into three contiguous subarrays†
 such that the median of the three subarray medians is less than or equal to k
.

∗
⌈x⌉
 is the ceiling function which returns the least integer greater than or equal to x
.

†
An array x
 is a subarray of an array y
 if x
 can be obtained from y
 by the deletion of several (possibly, zero or all) elements from the beginning and several (possibly, zero or all) elements from the end.

Input
Each test contains multiple test cases. The first line contains the number of test cases t
 (1≤t≤104
). The description of the test cases follows.

The first line of each test case contains two integers n
 and k
 (3≤n≤2⋅105
, 1≤k≤109
) — the length of the array a
 and the constant k
.

The second line of each test case contains n
 integers a1,a2,…,an
 (1≤ai≤109
) — the elements of the array a
.

It is guaranteed that the sum of n
 over all test cases does not exceed 2⋅105
.

Output
For each testcase, output "YES" if such a split exists, and "NO" otherwise.

You can output the answer in any case (upper or lower). For example, the strings "yEs", "yes", "Yes", and "YES" will be recognized as positive responses.*/


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int median(vector<int>);

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        int k;
        cin >> n >> k;
        vector<int> ma;
        for(int i = 0;i < n;i++){
            int e;
            cin >> e;
            ma.push_back(e);
        }
        if(n == 3){
            sort(ma.begin(), ma.end());
            if(median(ma) <= k){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }
        }else{
            int partition_size = (n / 3) - 1;
            vector<int>first(ma.begin() ,ma.begin() + partition_size);
            vector<int> mid(ma.begin() + partition_size + 1, ma.end() - partition_size - 1);
            vector<int> last(ma.end() - partition_size, ma.end());
            vector<int> final;
            final.push_back(median(first));
            final.push_back(median(mid));
            final.push_back(median(last));
            if(median(final) <= k){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }
        }
    }
}



int median(vector<int> arr) {
    sort(arr.begin(), arr.end());
    int m = arr.size();
    return arr[(m + 1)/2 - 1]; // Proper ceiling implementation
}