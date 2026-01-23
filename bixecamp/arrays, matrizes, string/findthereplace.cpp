#include <bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
#define pb push_back
#define int long long
#define endl '\n' //<< flush
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define dbg(x) cerr << #x << " = " << x << endl
#define uniq(v) sort(all(v)); v.erase(unique(all(v)), v.end())
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
typedef long long ll;
typedef pair<int, int> pi;


signed main() {
    int t; cin >> t;
    
    while(t--) {
        vector<int> letras(26, -1);
        string palavra;
        int n, i; cin >> n >> palavra;
        
        for(i=0; i<n; i++) {
            int ind; ind = palavra[i] - 'a';
            
            if(letras[ind] == -1) {
                letras[ind] = i%2;
            } else {
                if(letras[ind] != i%2) {
                    
                    cout << "NO" << endl;
                    break;
                }
            }
        }
        if(i==n) {
            cout << "YES" << endl;
        }
        
    }
    return 0;
    
}