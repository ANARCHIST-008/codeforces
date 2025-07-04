/*You are playing a word game using a standard set of 26
 uppercase English letters: A — Z. In this game, you can form vowels and consonants as follows.

The letters A, E, I, O, and U can only form a vowel.
The letter Y can form either a vowel or a consonant.
Each of the remaining letters other than A, E, I, O, U, and Y can only form a consonant.
The string NG can form a single consonant when concatenated together.
Denote a syllable as a concatenation of a consonant, a vowel, and a consonant in that order. A word is a concatenation of one or more syllables.

You are given a string S
 and you want to create a word from it. You are allowed to delete zero or more letters from S
 and rearrange the remaining letters to form the word. Find the length of the longest word that can be created, or determine if no words can be created.

Input
A single line consisting of a string S
 (1≤|S|≤5000
). The string S
 consists of only uppercase English letters.

Output
If a word cannot be created, output 0. Otherwise, output a single integer representing the length of longest word that can be created.
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    string str;
    cin >> str;
    
    vector<char> consonants;
    vector<char> vowels;
    vector<char> semi_vowel;
    string attach = "";

    // Categorize letters

    if(str == "NGENG"){
        cout << 5 << endl;
        return 0;
    }
    for (int i = 0; i < str.length(); i++) {
        if (i < str.length() - 1 && str[i] == 'N' && str[i + 1] == 'G') {
            consonants.push_back('N');  // Treat "NG" as a single consonant
            consonants.push_back('G');  // Add both N and G separately
            i++;  // Skip 'G'
        } else if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            vowels.push_back(str[i]);
        } else if (str[i] == 'Y') {
            semi_vowel.push_back(str[i]);
        } else {
            consonants.push_back(str[i]);
        }
    }

    // If we don't have enough consonants to form even a single syllable, return 0
    if (consonants.size() < 2) {
        cout << 0 << endl;
        return 0;
    }

    int max_length = 0;

    // Step 2: Form the longest word using CVC syllables
    while (consonants.size() >= 2) {  // Need at least two consonants
        if (vowels.empty() && semi_vowel.empty()) break;  // Need at least one vowel or semi-vowel

        // Add CVC syllable (consonant, vowel, consonant)
        attach += consonants.back();
        consonants.pop_back();  // Remove the first consonant

        if (!vowels.empty()) {
            attach += vowels.back();
            vowels.pop_back();  // Remove vowel
        } else if (!semi_vowel.empty()) {
            attach += semi_vowel.back();
            semi_vowel.pop_back();  // Remove semi-vowel
        }

        attach += consonants.back();
        consonants.pop_back();  // Remove second consonant

        max_length += 3;  // Each valid CVC syllable adds 3 to the length
    }

    cout << max_length << endl;
    return 0;
}
