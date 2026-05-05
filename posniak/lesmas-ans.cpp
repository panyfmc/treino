#include <bits/stdc++.h>
#define _  ios_base::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
#define endl '\n'
#define pb push_back

// N´ıvel 1: Se a velocidade ´e menor que 10 cm/h
// N´ıvel 2: Se a velocidade ´e maior ou igual a 10 cm/h e menor que 20 cm/h 
// N´ıvel 3: Se a velocidade ´e maior ou igual a 20 cm/h .
int main() {
    _
    int n, l;
    vector<int> v;
    while(cin >> n) {
        for(int i = 0; i < n; i++) {
            cin >> l;
            v.pb(l);
        } // velocidades guardadas
        int max = 0;
        int velocidade = 0;
        for(int j = 1; j < v.size(); j++) {
            if(v[j] > v[max]) max = j;
        }
        velocidade = v[max];
        if(velocidade < 10) cout << 1 << endl;
        else if(velocidade < 20) cout << 2 << endl;
        else cout << 3 << endl;
        v.clear();
    }
    
    return 0;
}