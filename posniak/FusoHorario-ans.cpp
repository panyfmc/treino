#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define _ ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define pb push_back
// cout << fixed << setprecision(2)

int main() {
	_
    int s = 0, t = 0, f = 0, horas = 0;
    cin >> s >> t >> f;
    horas = s + t + f;
    if(horas >= 24) {
        cout << horas%24 << endl;
    } else if(horas < 0) {
        cout << (horas%24 + 24)%24 << endl;
    } else {
        cout << horas << endl;
    }
    return 0;
    
}
