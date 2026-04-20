#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define endl '\n'
// oitavas quartas semifinal final (16+1)/2 = 8 4  14+1/2 7 4
int main() {
	_ 
    int f, s;
    cin >> f >> s;
    int cnt = 0;
    while(f != s) {
        f = (f+1)/2;
        s = (s+1)/2;
        cnt++;
    }
    
    if(cnt == 1) {
        cout << "oitavas" << endl;
    } else if(cnt == 2) {
        cout << "quartas" << endl;
    } else if(cnt == 3) {
        cout << "semifinal" << endl;
    } else cout << "final" << endl;
	
	return 0;
}
