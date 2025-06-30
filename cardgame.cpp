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

#include <iostream>
using namespace std;

int count_suneet_wins(int a1, int a2, int b1, int b2) {
    // Initialize the number of games Suneet can win
    int wins = 0;
    
    // Check all the combinations of rounds
    int suneet_wins = 0;
    int slavic_wins = 0;
    
    // Check all pairs (Suneet's card vs Slavic's card)
    int rounds[4][2] = {{a1, b1}, {a1, b2}, {a2, b1}, {a2, b2}};
    for (int i = 0; i < 4; ++i) {
        int card_suneet = rounds[i][0];
        int card_slavic = rounds[i][1];
        if (card_suneet > card_slavic) {
            suneet_wins++;
        } else if (card_suneet < card_slavic) {
            slavic_wins++;
        }
    }
    
    // Suneet wins if he has won more rounds than Slavic
    if (suneet_wins > slavic_wins) {
        wins++;
    }
    
    return wins;
}

int main() {
    // Read the number of test cases
    int t;
    cin >> t;
    
    while (t--) {
        // Read the cards for Suneet and Slavic
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;
        
        // Calculate how many games Suneet wins
        int result = count_suneet_wins(a1, a2, b1, b2);
        
        // Output the result
        cout << result << endl;
    }

    return 0;
}
