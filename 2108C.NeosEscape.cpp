#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    // Create a list of pairs (value, original index)
    vector<pair<int, int>> buttons;
    for (int i = 0; i < n; ++i) {
        buttons.emplace_back(a[i], i);
    }

    // Sort in non-increasing order of value
    sort(buttons.begin(), buttons.end(), [](const pair<int, int>& x, const pair<int, int>& y) {
        if (x.first != y.first) {
            return x.first > y.first;
        } else {
            return x.second < y.second;
        }
    });

    int clones = 0;
    int last_pos = -2; // Initialize to an impossible position

    for (const auto& button : buttons) {
        int current_pos = button.second;
        if (last_pos + 1 != current_pos) {
            clones++;
        }
        last_pos = current_pos;
    }

    cout << clones << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}