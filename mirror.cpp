/*A string consisting of only characters 'p', 'q', and 'w' is painted on a glass window of a store. Ship walks past the store, standing directly in front of the glass window, and observes string a
. Ship then heads inside the store, looks directly at the same glass window, and observes string b
.

Ship gives you string a
. Your job is to find and output b
.

Input
The first line contains an integer t
 (1≤t≤100
) — the number of test cases.

The only line of each test case contains a string a
 (1≤|a|≤100
) — the string Ship observes from outside the store. It is guaranteed that a
 only contains characters 'p', 'q', and 'w'.

Output
For each test case, output string b
, the string Ship observes from inside the store, on a new line.*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    int t;
    cin >> t;
    cin.ignore();
    string mirror;

    while(t--){
        string a;
        getline(cin, a);
        mirror = "";

        for(int i = a.length() - 1; i >= 0; i--){
            if(a[i] == 'q'){
                mirror += 'p';
            }else if(a[i] == 'p'){
                mirror += 'q';
            }else{
                mirror += a[i];
            }
        }
        cout << mirror << endl;
    }
}
