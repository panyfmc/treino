#include <bits/stdc++.h>
using namespace std;
#define endl '\n' 
#define pb push_back
#define int long long

int fib(int x) {
    vector<int> fibonacci(30);
    fibonacci[0] = fibonacci[1] = 1;
    for(int i = 2; i <= 30; i++) {
        fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
    }
    int ans = 0;
    ans = fibonacci[x];
    return ans;
}

signed main() {
    int n; cin >> n;
    cout << fib(n) << endl;
    return 0;
}
