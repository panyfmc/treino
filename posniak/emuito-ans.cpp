#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define endl '\n'
#define pb push_back
// P (10 ≤ P ≤ 105) n´umero de pontos a serem verificados
//Pi (-1000 ≤ Pi ≤ 3500)  altitude do terreno
// R (-900 ≤ R ≤ 5500)  altitude do rio
// B (10 ≤ B ≤ 900), cm do barco submersos

int main() {
	_ 
	int p, q; cin >> p;
	vector<int> v;
	bool flag = false;
	while(p--) {
	    cin >> q;
	    v.pb(q);
	}
	//sort(v.begin(), v.end());
	int r, b; cin >> r >> b;
	int disponivel = 0;
	
	for(int i = 0; i < v.size(); i++) {
	    disponivel = r - v[i];
	    //cout << disponivel << "aa";
	    if(disponivel <= b) {
	        flag = true;
	        break;
	    }
	}
	//cout << disponivel;
	if(flag) cout << "NAO" << endl;
	else cout << "SIM" << endl;
	
	return 0;

}
