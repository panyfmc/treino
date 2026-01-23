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
// const int MOD = 1e9 + 7; // 998244353;
// const int INF = 0x3f3f3f3f;
// const ll LINF = 0x3f3f3f3f3f3f3f3fll;
// const int MAXN = 3e5+5;

void solve(){
    int n; cin >> n; 
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    int l = -1, r = -1; //
    for (int i = 1; i < n; i++) {
        if (v[i] < v[i-1]) {
            l = i-1;
            break;
        }
    }

    if (l == -1) {
        cout << "yes" << endl;
        cout << "1 1" << endl;
        return;
    }
    
    for (int i = l + 1; i < n; i++) {
        if (v[i] <= v[i - 1]) {
            r = i;
        } else {
            break;
        }
    }
    

    reverse(v.begin() + l, v.begin() + r + 1);

    if (is_sorted(all(v))) {
        cout << "yes" << endl;
        cout << l+1 << " " << r+1 << endl;
    } else {
        cout << "no" << endl;
    }
}

signed main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int tc = 1; 
    // cin >> tc; 
    while(tc--) solve();
}