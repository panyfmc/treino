#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define pb push_back
#define int long long
#define _ ios_base::sync_with_stdio(false); cin.tie(nullptr);
// https://cses.fi/problemset/task/1623/

int solve(int idx, vector<int> &arr, int sum1, int sum2, int N) {
    if(idx == N) {
        return abs(sum1 - sum2);
    }
    
    int choose = solve(idx + 1, arr, sum1 + arr[idx], sum2, N);
    int not_choose = solve(idx + 1, arr, sum1, sum2 + arr[idx], N);
    return min(choose, not_choose);
    
}

signed main() {
    _
    int n; cin >> n;
    int s = n;
    vector<int> weights(s);
    for(int i = 0; i<s; i++) {
        cin >> weights[i];
    }
    int ans = solve(0, weights, 0, 0, n);
    cout << ans << endl;
}
