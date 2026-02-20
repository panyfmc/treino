#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pb push_back
// https://cses.fi/problemset/task/1068/

// void par(int &x) {
//     x /= 2;
// }

// void impar(int &y) {
//     y = (y * 3) + 1;
// }

signed main() {
    _
    vector<ll> valores;
    ll n; cin >> n;
    valores.pb(n);
    while(n != 1) {
        if(n%2 == 0) {
            //par(n); 
            n /= 2;
            //cout << n << " ";
            valores.pb(n);
        } else {
            n = (n * 3) + 1;
            //cout << n << " ";
            valores.pb(n);
        }
    } 
    for(ll x : valores) {
        cout << x << " ";
    }
    return 0;
}
