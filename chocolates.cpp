/*You went to the store, selling n
 types of chocolates. There are ai
 chocolates of type i
 in stock.

You have unlimited amount of cash (so you are not restricted by any prices) and want to buy as many chocolates as possible. However if you buy xi
 chocolates of type i
 (clearly, 0≤xi≤ai
), then for all 1≤j<i
 at least one of the following must hold:

xj=0
 (you bought zero chocolates of type j
)
xj<xi
 (you bought less chocolates of type j
 than of type i
)
For example, the array x=[0,0,1,2,10]
 satisfies the requirement above (assuming that all ai≥xi
), while arrays x=[0,1,0]
, x=[5,5]
 and x=[3,2]
 don't.

Calculate the maximum number of chocolates you can buy.

Input
The first line contains an integer n
 (1≤n≤2⋅105
), denoting the number of types of chocolate.

The next line contains n
 integers ai
 (1≤ai≤109
), denoting the number of chocolates of each type.

Output
Print the maximum number of chocolates you can buy.
*/

#include <iostream>
#include <vector>
using namespace std;

long long count_choco(vector<int>& types, int n) {
    long long sum = 0;
    long long max_choco = types[n - 1];

    for (int i = n - 1; i >= 0; i--) {
        max_choco = min(max_choco, (long long)types[i]);
        sum += max_choco;
        if (max_choco > 0) {
            max_choco--;
        }
    }

    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << count_choco(arr, n) << endl;

    return 0;
}
