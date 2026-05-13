#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define endl '\n'

int main() {
    _ 
    
    int n, m; cin >> n >> m;
    int matriz[n][m];
    bool flag = true;
    int pivoAnterior = -1;
    bool linhanull = false;
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> matriz[i][j];
        }
    }
    
    for(int k = 0; k < n; k++) {
        int pivo = -1;
        
        for(int l = 0; l < m; l++) {
            if(matriz[k][l] != 0) {
                pivo = l;
                break;
            }
        }
     
        if(pivo == -1) linhanull = true;
        else {
            if(linhanull) flag = false; 
            if(pivo <= pivoAnterior) {
                flag = false;
            }
            pivoAnterior = pivo;
        }
        
    }
    if(flag) cout << "S" << endl;
    else cout << "N" << endl;

	return 0;

}
