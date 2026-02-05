#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1000000;

int main() {
    vector<bool> isPrime(MAXN, true);
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i < MAXN; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j < MAXN; j += i) {
                isPrime[j] = false;
            }
        }
    }
    
    int n;
    
    while(cin >> n) {
        bool primevalue = false;
        bool primereverse = false;
        
        if (n < MAXN && isPrime[n]) {
            primevalue = true;
        
            string s = to_string(n);
            reverse(s.begin(), s.end());
            int rev = stoi(s);
        
            if (rev < MAXN && rev != n && isPrime[rev]) {
                primereverse = true;
                primevalue = false;
            }
        }
        
        if(primevalue) {
            cout << n << " is prime." << endl;
        } else if(primereverse) {
            cout << n << " is emirp." << endl;
        } else {
            cout << n << " is not prime." << endl;
        }
    }
    
    return 0;
}
 
