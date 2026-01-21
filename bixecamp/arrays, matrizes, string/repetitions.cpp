#include <bits/stdc++.h>
using namespace std;

// a t g c
int main() {

    string s;
    cin >> s;
    int n = 0;
    n = s.length();
    int cnt = 1, ans = 0;
    for (int i = 1; i < n; i++) {
    if (s[i-1] != s[i]) cnt = 1;
    else cnt++;
    ans = max(ans, cnt);
    }
    
    if(n==1) {
        cout << 1 << endl;
        return 0;
    }

    cout << ans << endl;


    return 0;
}