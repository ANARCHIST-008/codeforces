/*You are given a positive number x
. Find the smallest positive integer number that has the sum of digits equal to x
 and all digits are distinct (unique).

Input
The first line contains a single positive integer t
 (1≤t≤50
) — the number of test cases in the test. Then t
 test cases follow.

Each test case consists of a single integer number x
 (1≤x≤50
).

Output
Output t
 answers to the test cases:

if a positive integer number with the sum of digits equal to x
 and all digits are different exists, print the smallest such number;
otherwise print -1.
*/

#include<iostream>
#include<vector>
using namespace std;

int unique(int num);

int main(){
    int x;
    cin >> x;
    int temp = unique(x);
    cout << temp << endl;
}

int unique(int num){

    int count = 0;
    int value = 0;
    while(num != 0){
        num = num/10;
        count++;
    }
    int total_sum = 0;
    for(int i = num; i < count*10; i++){
        int temp = i;
        while(temp != 0){
            int digit = temp%10;
            total_sum = total_sum + digit;
            temp = temp/10;
        }
        if(total_sum == num){
            break;
        }else{
            total_sum = 0;
        }
    }
    return total_sum;
}