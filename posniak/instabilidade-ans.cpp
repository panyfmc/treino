#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define endl '\n'
const int MAXN = 512;

int main() {
    _ 
    // locais e terremotos
    int l, t; cin >> l >> t;
    int x, y;
    vector<vector<bool>> matriz(MAXN, vector<bool>(MAXN, false));
    while(l--) {
        cin >> x >> y;
        matriz[x][y] = true;
        
    }
    
    // epicentro do terremoto(tx, ty) e abrangencia
    int tx, ty, i;
    int cnt = 0;
    
    while(t--) {
        cin >> tx >> ty >> i;
        int xmin = max(0, tx - i);
        int xmax = min(512, tx + i);
        int ymin = max(0, ty - i);
        int ymax = min(512, ty + i);
        for (int x = xmin; x <= xmax; x++) {
            for (int y = ymin; y <= ymax; y++) {
                if (matriz[x][y]) {
                    cnt++;
                    //matriz[x][y] = false;
                }
            }
        }
        
    }
    
    cout << cnt << endl;
    
	return 0;
}
