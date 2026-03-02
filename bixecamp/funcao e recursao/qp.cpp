#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define endl '\n'
#define int long long
#define pb push_back
signed main() {
	_ 
	// 1 <= n <= 10^9
	// 1 <= k <= 40  (quantidade de primos), cada k (primo) pode ser de 2 até 10^9

    int n, k, primes;   // quantidade de numeros crescentes (1 até n) para dividir por k | k primos da lista
    cin >> n >> k;
    vector<bool> flag(n, true);     // marcar se o numero já é divisivel ou não
    
    vector<int> numbers;                        // guardar n numeros
    for(int i = 1; i<=n; i++) numbers.pb(i);
    
    vector<int> primenumbers(k);        // guardar k numeros primos
    for(int j = 0; j < k; j++) cin >> primenumbers[j];
    
    int cnt = n;
    for(int r = 0; r < k; r++) {        
        for(int s = 0; s < n; s++) {
            if((numbers[s] % primenumbers[r]) == 0) {   // cada numero até n é divisivel por cada k
                if(!flag[s]) {              // se o numero ja for divisivel nao faça nada
                    continue;
                } else {
                    flag[s] = false;            // se o numero for divisivel marca como falso e
                    cnt--;                      // cnt - 1
                }
                

            }
        }
    }
    cout << cnt << endl;        // printa quantos numeros de 1 até n NÃO são divisiveis por cada k
 
    return 0;
}
