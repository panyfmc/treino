#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define endl '\n'

int main() {
	_ 
    int a, b, c;
    cin >> a >> b >> c;
    if(b-a > c-b) {
        cout << "-1" << endl;
    } else if(b-a < c-b) {
        cout << "1" << endl;
    } else cout << "0" << endl;
	
	return 0;
}
