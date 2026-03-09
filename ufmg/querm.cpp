#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define endl '\n'
#define int long long
// 10000

signed main() {
    _
	int n;
	int cnt = 0;
	while(cin >> n) {
        cnt++;
        if(n == 0) break;
        vector<int> ingressos(n);
        
        for(int i = 0; i < n; i++) cin >> ingressos[i];
        for(int i = 0; i < ingressos.size(); i++) {
            if(ingressos[i] == i+1) {
               cout << "Teste " << cnt << endl;
               cout << i+1 << endl;
            }
        }
        cout << endl;
	}
	return 0;
}
