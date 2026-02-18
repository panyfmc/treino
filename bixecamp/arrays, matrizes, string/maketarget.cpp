#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define _ ios_base::sync_with_stdio(false); cin.tie(nullptr);

signed main() {
    _
    ll N; cin >> N;
    vector<string> grid(N, string(N, ' '));
    for(int i = 1; i <= N; i++) {
        int j = N + 1 - i;
        if(i > j) continue; 
        char cor = (i % 2 == 1) ? '#' : '.';
        
        for(int k = i-1; k <= j-1; k++) {
            for(int r = i-1; r <= j-1; r++) {
                grid[k][r] = cor;
            }
        }
    }
    
    for(int i=0; i<N; i++) {
        cout << grid[i] << endl;
    }
    return 0;
}
