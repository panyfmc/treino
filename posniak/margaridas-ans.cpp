#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define endl '\n'
#define int long long

// posicao = valor + pref[i-1][j] + pref[i][j-1] - pref[i-1][j-1];
// area = valor - pref[i-1][j] - pref[i][j-1] + pref[i-1][j-1];

signed main() {
    _ 
    int l, c, m, n, temp; cin >> l >> c >> m >> n;
    
    vector<vector<int>> sumplantas(l+1, vector<int>(c+1, 0));
    for(int i = 1; i <= l; i++) {
        for(int j = 1; j <= c; j++) {
            cin >> temp;
            sumplantas[i][j] = temp + sumplantas[i-1][j] + sumplantas[i][j-1] - sumplantas[i-1][j-1];
        }
    }
    
    // for(int i = 0; i <= l; i++) {
    //     for(int j = 0; j <= c; j++) {
    //         //cout << sumplantas[i][j] << " ";
    //     }
    //     //cout << endl;
    // }
    
    int soma = 0;
    int maiorsoma = 0;
    
    for(int i = m; i <= l; i+=m) {
        for(int j = n; j <= c; j+=n) {
            soma = sumplantas[i][j] - sumplantas[i-m][j] - sumplantas[i][j-n] + sumplantas[i-m][j-n];
            
            maiorsoma = max(maiorsoma, soma);
        }
    }
    
    cout << maiorsoma << endl;
    
	return 0;
}
