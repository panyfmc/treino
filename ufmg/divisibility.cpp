#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define endl '\n'
#define int long long
signed main() {
    _
	int t; cin >> t;
	while(t--) {
	    int a, b; cin >> a >> b;
	   // if(a == b) {
	   //     cout << "1" << endl;
	   //     continue;
	   // } else if(a < b) {
	   //     cout << b-a << endl;
	   //     continue;
	   // }
	    int ans = 0;
	    ans = (b - (a%b)) % b;
	    cout << ans << endl;
	}
    return 0;
}
