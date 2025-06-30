#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        struct custom{
            int data;
            int part;
        }
        vector<custom> a;
        for (int i = 0;i < n;i++){
            int e;
            cin >> e;
            custom temp;
            temp.data = e;
            temp.part = 0;
            a.push_back(temp);
        }

        int sub = a[0].data;
        int flag = 1;
        for(int each : a.data){
            if(each == sub){
                flag == 1;
            }else{
                break;
            }
        }

        if(flag == 1){
            cout << "NO" << endl;
        }else{
            
        }
        


    }
}