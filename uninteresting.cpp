/*You are given a number n
 with a length of no more than 105
.

You can perform the following operation any number of times: choose one of its digits, square it, and replace the original digit with the result. The result must be a digit (that is, if you choose the digit x
, then the value of x2
 must be less than 10
).

Is it possible to obtain a number that is divisible by 9
 through these operations?

Input
The first line contains an integer t
 (1≤t≤104
) — the number of test cases.

The only line of each test case contains the number n
, without leading zeros. The length of the number does not exceed 105
.

It is guaranteed that the sum of the lengths of the numbers across all test cases does not exceed 105
.

Output
For each test case, output "YES" if it is possible to obtain a number divisible by 9
 using the described operations, and "NO" otherwise.

You can output each letter in any case (lowercase or uppercase). For example, the strings "yEs", "yes", "Yes", and "YES" will be accepted as a positive answer.

*/

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long int num;
        cin >> num;
        vector<int> arr;
        vector<int> dup;
        long long int reversed = 0;
        long long int count = 0;

        while(num > 0){
            int digit = num % 10;
            reversed = reversed * 10 + digit;
            num = num / 10;
            count = count + 1;
        }
        //cout << reversed << endl;

        while(reversed > 0){
            int digit = reversed % 10;
            arr.push_back(digit);
            reversed = reversed / 10;
        }

        int possible = 0;

        for(int i = 0; i < count; i++){
            dup = arr;
            if((arr[i] * arr[i]) < 10){
                int digit = arr[i] * arr[i];
                dup[i] = digit;
                long long int new_num = 0;
                for(int j = 0; j < count ; j++){
                    int new_dig = dup[j];
                    new_num = new_num * 10 + new_dig;
                }
                cout << new_num << endl;
                if(new_num % 9 == 0){
                    possible = 1;
                    break;
                }
            }
        }
        cout << (possible == 1 ? "Yes" : "No") << endl;
    }
}