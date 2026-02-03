#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(false); cin.tie(nullptr);
// https://vjudge.net/contest/786727#problem/A

int main() {
	_
	
	int n; cin >> n;
	while (n--) {
	    int x; cin >> x;
	    int count = 0;
	    for (int i = 1; i*i <= x; i++) {
	        if(x % i == 0) {
	            count++;
	            
	            if(i*i != x) count++;
	        }
	    }
	    cout << count << endl;
	}
	
	return 0;
}
