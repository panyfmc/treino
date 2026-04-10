#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define _ ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define pb push_back
// cout << fixed << setprecision(2)

int main() {
	_
    double p1, p2, x, c, pix = 0, cartao = 0, result = 0, temp = 0;
    int n = 3, pos = 1;
    vector<double> menoresvalores;
    while(n--) {
        cin >> p1 >> p2 >> x >> c;
        x /= 100;
        c /= 100;
        pix = (p1 + p2) - (p1 + p2)*x;
        cartao = (p1 + p2) + (p1 + p2)*c;
        temp = min(pix, cartao);
        menoresvalores.pb(temp);
    }
    // for(auto x : menoresvalores) {
    //     cout << x << " ";
    // }
    result = menoresvalores[0];
    for(int j = 1; j<menoresvalores.size(); j++) {
        if(menoresvalores[j] < result) {
            pos = j+1;
            result = menoresvalores[j];
        }
    }
    cout << fixed << setprecision(2);
    cout << "R$ " << result << " Banca " << pos << endl;
    return 0;
    
}
