#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define endl '\n'
#define int unsigned long long

int fatorial(int num) {
    if(num <= 1) return 1;
    return num * fatorial(num - 1);
}

signed main() {
	_
	int n; cin >> n;
	fatorial(n);
	cout << fatorial(n) << endl;
	return 0;
}
