/*Suneet and Slavic play a card game. The rules of the game are as follows:

Each card has an integer value between 1
 and 10
.
Each player receives 2
 cards which are face-down (so a player doesn't know their cards).
The game is turn-based and consists exactly of two turns. In a round, both players pick a random unflipped card and flip it. The player who flipped a card with a strictly greater number wins the round. In case of equality, no one wins the round.
A player wins a game if he wins the most number of rounds (i.e. strictly greater than the other player). In case of equality, no one wins the game.
Since Suneet and Slavic aren't best friends, you need to calculate the number of ways the game could happen that Suneet would end up as the winner.

For a better understanding, please check the notes section.

Input
The first line contains an integer t
 (1≤t≤104
) — the number of test cases.

The first and only line of each test case contains 4
 integers a1
, a2
, b1
, b2
 (1≤a1,a2,b1,b2≤10
) where a1
 and a2
 represent the cards Suneet has, and b1
 and b2
 represent the cards Slavic has, respectively.

Output
For each test case, output a single integer — the number of games Suneet would win considering all possible games.*/


#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a1;
        int a2;
        int b1;
        int b2;
        cin >> a1 >> a2 >> b1 >> b2;
        vector<int> suneet = {a1, a2};
        vector<int> slavic = {b1, b2};
        int wins = 0;

        for(int initial_suneet : {0, 1}){
            for(int slavic_initial : {0, 1}){
                int suneet_remaining = 1 - initial_suneet;
                int slavic_remaining = 1 - slavic_initial;
                int slavic_win = 0;
                int suneet_win = 0;

                //First 2 flipped cards comparision
                if(suneet[initial_suneet] > slavic[slavic_initial]){
                    suneet_win++;
                }else if(suneet[initial_suneet] < slavic[slavic_initial]){
                    slavic_win++;
                }

                //Remaining unflipped cards comparision
                if(suneet[suneet_remaining] > slavic[slavic_remaining]){
                    suneet_win++;
                }else if(suneet[suneet_remaining] < slavic[slavic_remaining]){
                    slavic_win++;
                }

                if(suneet_win > slavic_win){
                    wins++;
                }

            }
        }

        cout << wins << endl;
    }
}