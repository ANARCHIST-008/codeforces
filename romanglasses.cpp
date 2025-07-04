/*Iulia has n
 glasses arranged in a line. The i
-th glass has ai
 units of juice in it. Iulia drinks only from odd-numbered glasses, while her date drinks only from even-numbered glasses.

To impress her date, Iulia wants to find a contiguous subarray of these glasses such that both Iulia and her date will have the same amount of juice in total if only the glasses in this subarray are considered. Please help her to do that.

More formally, find out if there exists two indices l
, r
 such that 1≤l≤r≤n
, and al+al+2+al+4+⋯+ar=al+1+al+3+⋯+ar−1
 if l
 and r
 have the same parity and al+al+2+al+4+⋯+ar−1=al+1+al+3+⋯+ar
 otherwise.

Input
The first line contains a single integer t
 (1≤t≤104
) — the number of test cases.

The first line of each test case contains a single integer n
 (1≤n≤2⋅105
) — the total number of glasses.

The second line of each test case contains n
 integers a1,…,an
 (1≤ai≤109
) — the amount of juice in each glass.

The sum of n
 over all test cases does not exceed 2⋅105
.

Output
For each test case, output "YES" if there exists a subarray satisfying the condition, and "NO" otherwise.

You can output the answer in any case (for example, the strings "yEs", "yes", "Yes" and "YES" will be recognized as a positive answer).
*/


#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        vector<int> main_arr;
        vector<int> lady;
        vector<int> guy;
        vector<int> lady_poss;
        vector<int> guy_poss;
        int n;
        cin >> n;
        for(int i = 0;i < n; i++){
            int element;
            cin >> element;
            main_arr.push_back(element);
        }

        for(int i = 0; i < n; i++){
            if(i % 2 == 0){
                int ele;
                ele = main_arr[i];
                lady.push_back(ele);
            }else{
                int ele;
                ele = main_arr[i];
                guy.push_back(ele);
            }
        }


        int lady_index = lady.size();
        int guy_index = guy.size();

        for(int start = 0; start < lady_index; start++){
            int lady_sums = 0;
            for(int end = start; end < lady_index; end++){
                lady_sums += lady[end];
                lady_poss.push_back(lady_sums);
            }
        }


        for(int start = 0; start < guy_index; start++){
            int guy_sums = 0;
            for(int end = start; end < guy_index; end++){
                guy_sums += guy[end];
                guy_poss.push_back(guy_sums);
            }
        }

        int flag = 0;
        
        for(int i = 0; i < guy_poss.size(); i++){
            for(int j = 0; j < lady_poss.size(); j++){
                if(guy_poss[i] == lady_poss[j]){
                    flag = 1;
                    break;
                }
            }
        }

        if(flag == 1){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
        
    }
}