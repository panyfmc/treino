#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define endl '\n'
// #define int long long

int main() {
	_
	int n; cin >> n;
	if(n < 0) n = -n;
// 	if(n == 0) {
// 	    cout << "nao" << endl;
// 	    return 0;
// 	}
	vector<bool> isPrime(n+1, true);
	isPrime[0] = isPrime[1] = false;
    for(int i = 2; i*i <= n; i++) {
        if(isPrime[i]) {
            for(int j = i * i; j <= n; j+=i) {
                isPrime[j] = false;
            }
        }
    }
    if(isPrime[n]) {
        cout << "sim" << endl;
        return 0;
    }
    cout << "nao" << endl;
    // for(auto x : isPrime) cout << x << " ";
	return 0;
}
