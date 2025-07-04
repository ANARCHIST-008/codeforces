#include <iostream>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    while(t--){
        int number;
        cin >> number;
        long int num = number;
        int flag = 0;
        for(long int i = 2;i <= number; i++){
            if(num % i == 0 && num % 2 != 0){
                flag = 1;
                break;
            }
        }
    
        if(flag == 1){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
}


