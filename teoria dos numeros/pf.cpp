#include <bits/stdc++.h>
using namespace std;
const int MAXN = 50000;
#define _ ios::sync_with_stdio(false); cin.tie(nullptr);
// Prime Factors
// https://vjudge.net/contest/786727#problem/E
int main() {
    _
    
	long long x;
	vector<bool> isPrime(MAXN, true);
    isPrime[0] = isPrime[1] = false;
    
    for (int i = 2; i * i < MAXN; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j < MAXN; j += i) {
                isPrime[j] = false;
            }
        }
    }
	vector<int> prime;
	vector<long long> nums;
	for(int i=2; i < MAXN; i++) {
	    if(isPrime[i]) prime.push_back(i);
	}
	
	while(cin >> x && x!=0) {
	    long long n = 0;
	    n = x;
	    if (x < 0) {
            nums.push_back(-1);
            x = -x;
        }
	    for(int i : prime) {
	        if(1LL*i*i > x) break;
	        while(x%i == 0) {
	            nums.push_back(i);
	            x /= i;
	        }
	    }
	    if (x > 1) nums.push_back(x);
        cout << n << " = ";
        for(int i=0; i<nums.size(); i++) {
            if(i) cout << " x ";
            cout << nums[i];
        }
        nums.clear();
        cout << endl;
	}
	return 0;
}
