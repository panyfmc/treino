#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define endl '\n'
//(0,0) e (432, 468)
int main() {
	_ 
    int x, y; cin >> x >> y;
    if(x >= 0 && x <= 432) {
        if(y >= 0 && y <= 468) {
            cout << "dentro" << endl;
        }
    } else cout << "fora" << endl;
	
	return 0;
}
