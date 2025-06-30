/*Dreamoon wants to climb up a stair of n steps. He can climb 1 or 2 steps at each move. Dreamoon wants the number of moves to be a multiple of an integer m.

What is the minimal number of moves making him climb to the top of the stairs that satisfies his condition?

Input
The single line contains two space separated integers n, m (0 < n ≤ 10000, 1 < m ≤ 10).

Output
Print a single integer — the minimal number of moves being a multiple of m. If there is no way he can climb satisfying condition print  - 1 instead.*/


#include <iostream>
using namespace std;

int main(){
    int n, m;
    int no_of_moves;

    cin >> n >> m;

    for(int i = (n+1)/2; i <= n; i++){
        if(i % m == 0){
            no_of_moves = i;
            cout << no_of_moves << endl;
            return 0;
        }
    }

    cout << -1 << endl;
}