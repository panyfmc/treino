#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define endl '\n'
#define pb push_back

signed main() {
    _
	int t; cin >> t;
	while(t--) {
	    int x, y; cin >> x >> y;
	    vector<int> a;
	    vector<int> b;
	    
	    int p = 1;
	    while(x) {
	        int d = 0;
	        d += (x%10);
	        if(d) a.pb(d*p);
	        x/=10;
	        p*=10;
	    }
	    p = 1;
	    while(y) {
	        int d = 0;
	        d += (y%10);
	        if(d) b.pb(d*p);
	        y/=10;
	        p*=10;
	    }
	    bool flag = true;
	    for(auto i : a) {
	        for(auto j : b) {
	            if(!flag) cout << " + ";
	            cout << i << " x " << j;
	            flag = false;
	        }
	    }
	    cout << endl;
	}
	
    return 0;
}
