#include <bits/stdc++.h>
using namespace std;

int main() {
    int q; cin >> q;
    while (q--) {
        int n; cin >> n;
        vector<bool> marcado(n, false), usado(n, false);
        string s; cin >> s; // palavra embaralhada
        string t; cin >> t; // palavra ordenada
        for (int i = 0; i < n; i++) { // i -> s
            for (int j = 0; j < n; j++) { // j -> t
                if (s[i] == t[j] && !usado[j]) {
                    marcado[i] = true; // consegui achar um par para o s[i]
                    usado[j] = true; // usei o t[j]
                    break;

                } 
            }
        }
        bool ok = true;
        for(int i=0; i<n; i++) {
            if (!marcado[i]) {
                ok = false;
                break;
            }
        }
        if (ok) 
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }
    return 0;
}