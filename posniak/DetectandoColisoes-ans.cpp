#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define endl '\n'
// 0 0 1 1    x0a y0a x1a y1a
// 0 0 1 1      x0b y0b x1b y1b

int main() {
	_ 
	int x0a, y0a, x1a, y1a, x0b, y0b, x1b, y1b;
	cin >> x0a >> y0a >> x1a >> y1a >> x0b >> y0b >> x1b >> y1b;
	if(x1a < x0b) {     // a(x1) menor que o b(x0) 
	    cout << "0" << endl;
	} else if(x1b < x0a) {      // b(x1) menor que a(x0) 
	    cout << "0" << endl;
	} else if(y1a < y0b) {
	    cout << "0" << endl;    // a(y1) menor que b(y0)
	} else if(y1b < y0a) {      // b(y1) menor que a(y0)
	    cout << "0" << endl;
	} else cout << "1" << endl;
	
	return 0;
}
