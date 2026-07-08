#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define _ ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
const long long MOD = 1000000007LL;

signed main() {
    _ 
    int n, k;
    while(cin >> n >> k) {
        vector<int> notas;
        int nota;
        while(n--) {
            cin >> nota;
            notas.pb(nota);
        }
        
        sort(all(notas), greater<int>());   //ordena como decrescente
        
        int alvo = notas[k-1];
        int result = 0;
        for(int i = 0; i < k; i++) {
            result += notas[i];
        }
        result %= MOD;
        cout << result << endl;
    } 
    
    return 0;
    
}
