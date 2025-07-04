


/*
Trippi Troppi resides in a strange world. The ancient name of each country consists of three strings. The first letter of each string is concatenated to form the country's modern name.

Given the country's ancient name, please output the modern name.

Input
The first line contains an integer t
 – the number of independent test cases (1≤t≤100
).

The following t
 lines each contain three space-separated strings. Each string has a length of no more than 10
, and contains only lowercase Latin characters.

Output
For each test case, output the string formed by concatenating the first letter of each word.

*/


#include<iostream>
#include<string>
using namespace std;



int main(){
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    cin.ignore();

    while(t--){
        string str;
        getline(cin, str);
        string newstr = "";
        int strlen = str.size() - 1;
        newstr = newstr + str[0];
        for(int i = 0;i < strlen;i++){
            if(str[i] == ' '){
                newstr = newstr + str[i + 1];
            }
        }

        cout << newstr << endl;
    }
}