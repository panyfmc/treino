#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define endl '\n'

bool isPrime(int n) {
    if(n < 2) return false;
    for(int i = 2; i*i < n; i++) {
        if(n%i == 0) return false;
    }
    return true;
}

signed main() {
    _
	int n; cin >> n;
	while(n--) {
	    int v; cin >> v;
	    if(isPrime(v) == true) {
	        cout << "Prime" << endl;
	    } else {
	        cout << "Not Prime" << endl;
	    }
	}
    return 0;
}
