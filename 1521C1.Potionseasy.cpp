/*This is the easy version of the problem. The only difference is that in this version n≤2000
. You can make hacks only if both versions of the problem are solved.

There are n
 potions in a line, with potion 1
 on the far left and potion n
 on the far right. Each potion will increase your health by ai
 when drunk. ai
 can be negative, meaning that potion will decrease will health.

You start with 0
 health and you will walk from left to right, from first potion to the last one. At each potion, you may choose to drink it or ignore it. You must ensure that your health is always non-negative.

What is the largest number of potions you can drink?

Input
The first line contains a single integer n
 (1≤n≤2000
) — the number of potions.

The next line contains n
 integers a1
, a2
, ... ,an
 (−109≤ai≤109
) which represent the change in health after drinking that potion.

Output
Output a single integer, the maximum number of potions you can drink without your health becoming negative.*/


#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main(){
    long long int health = 0;
    int n;
    cin >> n;
    vector<int> a;
    for(int i = 0;i < n;i++){
        int e;
        cin >> e;
        a.push_back(e);
    }

    priority_queue<int, vector<int>, greater<int>> q;

    for(int i =0;i < n;i++){
        health += a[i];
        q.push(a[i]);


        if(health < 0){
            health -= q.top();
            q.pop();
        }
    }

    cout << q.size() << endl;   

}





//Priority queue is used because the main goal of the problwm is to maximize the no of potions you can drink wihout health ever going negative

//traverse left to right deciding weather to drink or skip each potion
//cant drink potion that causes your health it  drop below zero

//key point  better to replace druck potion wiht better one later
