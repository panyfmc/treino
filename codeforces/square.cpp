#include <bits/stdc++.h>
using namespace std;


int main() {
    int t; cin >> t;
    for(int i = 0; i<t; i++) {
        int a; cin >> a;
        int b; cin >> b;
        int c; cin >> c;
        int d; cin >> d;
        if ((a==b) && (b==c) && (c==d) && (a==d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}