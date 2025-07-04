#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long num;
        cin >> num;

        
        long long sum = 0;
        long long temp_num = num;
        while (temp_num > 0) {
            sum += temp_num % 10;
            temp_num /= 10;
        }

    
        if (sum % 9 == 0) {
            cout << "YES" << endl;
            continue;
        }

        int possible = 0;
        vector<int> digits;

        temp_num = num;
        while (temp_num > 0) {
            digits.push_back(temp_num % 10);
            temp_num /= 10;
        }

        for (int i = 0; i < digits.size(); i++) {
            long long original_digit = digits[i];
           
            if (original_digit * original_digit < 10) {
                digits[i] = original_digit * original_digit;
                
                long long new_sum = 0;
                for (int j = 0; j < digits.size(); j++) {
                    new_sum += digits[j];
                }

                
                if (new_sum % 9 == 0) {
                    possible = 1;
                    break;
                }

                digits[i] = original_digit;
            }
        }

        if (possible == 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}
