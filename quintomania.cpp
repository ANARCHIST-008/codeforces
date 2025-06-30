/*Boris Notkin composes melodies. He represents them as a sequence of notes, where each note is encoded as an integer from 0
 to 127
 inclusive. The interval between two notes a
 and b
 is equal to |a−b|
 semitones.

Boris considers a melody perfect if the interval between each two adjacent notes is either 5
 semitones or 7
 semitones.

After composing his latest melodies, he enthusiastically shows you his collection of works. Help Boris Notkin understand whether his melodies are perfect.

Input
The first line contains an integer t
 (1≤t≤1000
) — the number of melodies.

Each melody is described by two lines.

The first line contains an integer n
 (2≤n≤50
) — the number of notes in the melody.

The second line contains n
 integers a1,a2,…,an
 (0≤ai≤127
) — the notes of the melody.

Output
For each melody, output "YES", if it is perfect; otherwise, output "NO".

You can output the answer in any case (upper or lower). For example, the strings "yEs", "yes", "Yes", and "YES" will be recognized as positive responses.*/


#include<iostream>
#include<vector>
using namespace std;

int check(vector<int> arr);

int main(){
    int t;
    cin >> t;
    while(t--){
        vector<int> a;
        int n;
        cin >> n;
        for(int i = 0;i < n;i++){
            int e;
            cin >> e;
            a.push_back(e);
        }
        if(check(a)){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
}



int check(vector<int> arr){
    int n = arr.size();
    int flag = 0;
    for(int i = 0;i < n - 1;i++){
        if(abs(arr[i] - arr[i + 1]) == 5 || (abs(arr[i] - arr[i + 1]) == 7)){
            flag = 1;
        }else{
            flag = 0;
            break;
        }
    }
    return flag;
}