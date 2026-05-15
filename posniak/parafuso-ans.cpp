#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define endl '\n'
#define pb push_back
#define int long long

signed main() {
	_ 
	int p;
	vector<int> v;
	while(cin >> p) {
	    v.pb(p);
	}
	sort(v.begin(), v.end());
	int cnt = 0;
	int i = 0;
	int j = 0;
	while(i < v.size()) {
	    cnt = 1;
	    j = i + 1;
	    while(i < v.size() && v[j] == v[i]) {
	        cnt++;
	        j++;
	    }
	    if(cnt == 1) {
	        cout << "N" << v[i] << " tem apenas um exemplar" << endl;
	    } else {
	        cout << "N" << v[i] << " tem " << cnt << " exemplares" << endl;
	    }
	    i = j;
	}
	
	return 0;

}
