#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int median(vector<int> arr) {
    sort(arr.begin(), arr.end());
    int m = arr.size();
    return arr[(m + 1)/2 - 1]; // Correct ceiling implementation
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        vector<int> ma(n);
        for(int i = 0; i < n; i++) {
            cin >> ma[i];
        }

        if(n == 3) {
            int med = median(ma);
            cout << (med <= k ? "YES" : "NO") << endl;
            continue;
        }

        // Calculate partition sizes more carefully
        int part1_size = max(1, n/3);
        int part3_size = max(1, n/3);
        int part2_size = n - part1_size - part3_size;

        // Ensure we have three non-empty partitions
        if(part2_size < 1) {
            part1_size--;
            part2_size++;
        }

        vector<int> first(ma.begin(), ma.begin() + part1_size);
        vector<int> mid(ma.begin() + part1_size, ma.begin() + part1_size + part2_size);
        vector<int> last(ma.begin() + part1_size + part2_size, ma.end());

        int m1 = median(first);
        int m2 = median(mid);
        int m3 = median(last);

        vector<int> final = {m1, m2, m3};
        if(median(final) <= k) {
            cout << "YES" << endl;
        } else {
            // Try one more partition option if first attempt fails
            part1_size = n/2 - 1;
            part3_size = n/2 - 1;
            part2_size = n - part1_size - part3_size;

            first = vector<int>(ma.begin(), ma.begin() + part1_size);
            mid = vector<int>(ma.begin() + part1_size, ma.begin() + part1_size + part2_size);
            last = vector<int>(ma.begin() + part1_size + part2_size, ma.end());

            m1 = median(first);
            m2 = median(mid);
            m3 = median(last);

            final = {m1, m2, m3};
            cout << (median(final) <= k ? "YES" : "NO") << endl;
        }
    }
}