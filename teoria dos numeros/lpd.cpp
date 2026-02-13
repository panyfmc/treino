#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
const int MAXN = 10000005;

// Largest Prime Divisor
// https://vjudge.net/contest/786727#problem/G

signed main() {
	_ 
	
	int n;
	vector<bool> isPrime(MAXN, true);
	isPrime[0] = isPrime[1] = false;
	
	for(int i=2; i*i < MAXN; i++) {
	   if(isPrime[i]) {
	        for(int j = i * i; j < MAXN; j += i) {
	            isPrime[j] = false;
	        }
	    }
	}
	
	vector<int> primes;
	for (int i = 2; i < MAXN; i++) {
	    if(isPrime[i]) primes.push_back(i);
	}

    int tam = primes.size();
    
// 	cout << tam << endl;
	
// 	for(int i = 0; i < 100; i++) {
// 	    cout << primes[i] << endl;
// 	}
	
	while(cin >> n && n != 0) {
	    n = abs(n);
	    int cnt = 0;
	    int num = 0;
	    for(int i = 0; i < tam; i++) {
	        if(n%primes[i] == 0) {
	            cnt++;
	            num = primes[i];
	            while(n % primes[i] == 0) n /= primes[i];
	        } 
	    }
	    
	    if (n > 1) {
	        num = n;
	        cnt++;
	    } 
	    
	    // n = x . y -> y pode ser um primo maior que raiz(n)
	    // n = 7
	    
	    if(cnt > 1) {
	        cout << num << endl;
	    } else {
	        cout << "-1" << endl;
	    }
	    
	}
	
    return 0;
}
