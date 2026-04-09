#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define _ ios_base::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    _ 
    float a, g, ra, rg;
	cin >> a >> g >> ra >> rg;
	float gastokm_a = 0, gastokm_g = 0;
	gastokm_a = a/ra;
	gastokm_g = g/rg;
	if(gastokm_a < gastokm_g) {
	    cout << "A" << endl;
	} else cout << "G" << endl;
    return 0;

}
 
