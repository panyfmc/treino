#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define ll long long
using namespace std;

int main() {
    _

    int n; cin >> n;
    ll ans = 0;
    vector<ll> a(n);
    for (int i=0; i<n; i++) cin >> a[i];
    sort(a.begin(), a.end());

    for(int i=0; i<n; i++) {
       // ans += a[i]*(i-(n-i-1));
        ans += a[i] * (2ll*i -n +1);
    }

    cout << ans << endl;

    return 0;
}