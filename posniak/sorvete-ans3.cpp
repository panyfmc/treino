#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define endl '\n'
#define pb push_back
//const int MAXN = 10001;

int main() {
	_ 
	// comprimento praia e sorveteiros
	int p, s, u, v; 
	int cnt = 0;
	int start = 0, end = 0;
	vector<pair<int,int>> intervalo;
	
	while(cin >> p >> s && (p != 0 || s != 0)) {
	    cnt++;
	    while(s--) {
	        cin >> u >> v;
	        intervalo.pb({u, v});
	    }
	    sort(intervalo.begin(), intervalo.end());
        cout << "Teste " << cnt << endl;
        start = intervalo[0].first;
        end = intervalo[0].second;
        
        for(int i = 1; i < intervalo.size(); i++) {
            if(intervalo[i].first <= end) {
                end = max(end, intervalo[i].second);
            } else {
                cout << start << " " << end << endl;
                start = intervalo[i].first;
                end = intervalo[i].second;
            }
        }
        cout << start << " " << end << endl;
        intervalo.clear();
        start = 0;
        end = 0;
	    
	}
	
	
	
	return 0;

}
