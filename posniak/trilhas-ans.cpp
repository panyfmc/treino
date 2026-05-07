#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define endl '\n'
#define pb push_back
// abs()
int main() {
	_ 
	int n; cin >> n;
	int come = 0, back = 0, best = 0;
	int num, m;
	vector<int> v;
	vector<int> altitudes;
	while(n--) {
	    cin >> m;
	    while(m--) {
	        cin >> num;
	        v.pb(num);
	    }
	    // esquerda para direita
	    for(int i = 1; i<v.size(); i++) {
	        if(v[i] < v[i-1]) continue;
	        else (come += (v[i] - v[i-1]));
	    }
	    // direita para esquerda
	    for(int j = v.size() -2; j>=0; j--) {
	        if(v[j] < v[j+1]) continue;
	        else(back += (v[j] - v[j+1]));
	    }
	    best = min(come, back);
	    altitudes.pb(best);
	    v.clear();
	    come = 0;
	    back = 0;
	    best = 0;
	}
	int p  = 0;
	//int result = 0;
	for(int k = 1; k < altitudes.size(); k++) {
	    if(altitudes[k] < altitudes[p]) p = k;
	}
	cout << p+1 << endl;
	
	return 0;

}
