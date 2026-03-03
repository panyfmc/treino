#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define endl '\n'
#define int long long

int n, k;
vector<int> primes;

int solve(int pos, int product, int sign) {
    int ans = 0;

    for(int i = pos; i < k; i++) {
        int newProduct = product * primes[i];
        if(newProduct > n) continue;

        ans += sign * (n / newProduct);

        // continua multiplicando com os próximos
        ans += solve(i + 1, newProduct, -sign); // muda o sinal para interseções
    }

    return ans;
}

signed main() {
	_ 
    cin >> n >> k;
    primes.resize(k);
    for(int i = 0; i < k; i++) cin >> primes[i];

    int divisiveis = solve(0, 1, 1);
    cout << n - divisiveis << endl;
    
}
