#include <bits/stdc++.h>
#define _  ios_base::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
#define endl '\n'
#define pb push_back

int main() {
    _
    //NINHO, CONDENSADO, TAPIOCA, MORANGO, CHOCOLATE.
    // O, N, D, T, M, C 
    int o, n, d, t, m, c;
    int NINHO = 0, CONDENSADO = 0, TAPIOCA = 0, MORANGO = 0, CHOCOLATE = 0;
    
    while(cin >> o >> n >> t >> m >> c) {
        NINHO += o;
        CONDENSADO += n;
        TAPIOCA += t;
        MORANGO += m;
        CHOCOLATE += c;
    }
    vector<int> v;
    v.pb(NINHO), v.pb(CONDENSADO), v.pb(TAPIOCA), v.pb(MORANGO), v.pb(CHOCOLATE);
    
    int maxindex = 0;
    for(int i = 1; i < v.size(); i++) {
        if(v[i] > v[maxindex]) {
            maxindex = i;
        }
    }
    if(maxindex == 0) cout << "NINHO" << endl;
    else if(maxindex == 1) cout << "CONDENSADO" << endl;
    else if(maxindex == 2) cout << "TAPIOCA" << endl;
    else if(maxindex == 3) cout << "MORANGO" << endl;
    else cout << "CHOCOLATE" << endl;
    // for(auto x : v) {
    //     cout << x << " ";
    // }
    
    return 0;
}
