#include <bits/stdc++.h>
using namespace std;
#define _ ios::sync_with_stdio(false); cin.tie(nullptr);
// light, more light
int main() {
    _
	unsigned long long n;
	while(cin >> n && n!=0) {
	    unsigned long long r = sqrt(n);
	    if(r*r == n) {
	        cout << "yes" << endl;
	    } else {
	        cout << "no" << endl;
	    }
	}
	return 0;
}
