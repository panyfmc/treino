#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define endl '\n'
// n linhas e m colunas representando o lago, 6 ≤ n, m ≤ 10000
int main() {
    _ 
    int q; cin >> q;
    int n, m;
    
    while(q--) {
        cin >> n >> m;
        //int cnt = 0;
        int sonar = 3;
        int result = 0;
        
        result = (n/sonar)*(m/sonar);
  
        cout << result << endl;
    }
    
	return 0;
}
