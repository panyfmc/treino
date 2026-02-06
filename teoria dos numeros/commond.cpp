#include <bits/stdc++.h>
using namespace std;
const int MAXX = 1e6;
#define _ ios::sync_with_stdio(false); cin.tie(nullptr);
// https://vjudge.net/contest/786727#problem/B
// Common Divisors
int main() {
    _

    int n;
    cin >> n;
    
    vector<int> freq(MAXX + 1, 0);

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        freq[x]++;
    }

    // Testa divisores do maior para o menor
    for (int d = MAXX; d >= 1; d--) {
        int cnt = 0;
        for (int multiple = d; multiple <= MAXX; multiple += d) {
            cnt += freq[multiple];
            if (cnt >= 2) {
                cout << d << endl;
                return 0;
            }
        }
    }

    cout << 1 << endl;
    return 0;
}
