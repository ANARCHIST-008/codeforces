/*The most valuable berry of the Karelian forests is cloudberry. To make jam from cloudberries, you take equal amounts of berries and sugar and cook them. Thus, if you have 2
 kg of berries, you need 2
 kg of sugar. However, from 2
 kg of berries and 2
 kg of sugar, you will not get 4
 kg of jam, as one might expect, but only 3
 kg, since some of the jam evaporates during cooking. Specifically, during standard cooking, exactly a quarter (or 25%
) of the jam evaporates.

How many kilograms of cloudberries are needed to prepare n
 3
-kilogram jars of jam?


Input
Each test consists of several test cases. The first line contains a single integer t
 (1≤t≤104
) — the number of test cases. The following lines describe the test cases.

Each test case contains a single integer n
 (1≤n≤108
) — the number of jars of jam that need to be prepared.

Output
For each test case, output a single integer — the amount of berries needed for the jam in kilograms.*/


#include<iostream>
using namespace std;


int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << 2*n << endl;
    }
}