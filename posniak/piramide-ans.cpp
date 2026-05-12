#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define endl '\n'

int main() {
    _ 
    int n; cin >> n;
    vector<vector<int>> m(n, vector<int>(n));
    int t = n;
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            m[i][j] = min({i, j, n - i -1, n - j -1}) + 1;
        }
    }
 
    for(int k = 0; k < t; k++) {
        for(int l = 0; l < t; l++) {
            cout << m[k][l] << " ";
        }
        cout << endl;
    }
    
	return 0;
}
