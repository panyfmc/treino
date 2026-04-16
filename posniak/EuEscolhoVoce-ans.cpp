#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define endl '\n'

 
int main() {
	_ 
	string l, g;
	cin >> l >> g;
	if(l == "protasio") {
        if(g == "branco") {
            cout << "saude sesc" << endl;
        } else if(g == "cinza" || g == "tricolor") {
	        cout << "redencao" << endl;
        } else cout << "gatou" << endl;
        
	} else if(l == "ipiranga") {
	    if(g == "branco") {
            cout << "saude" << endl;
        } else if(g == "tricolor") {
	        cout << "marinha" << endl;
        } else if(g == "preto") {
	        cout << "puc" << endl;
        } else cout << "gatou" << endl;
	} else {
	    if(g == "preto") {
            cout << "puc vale" << endl;
        } else if(g == "tricolor") {
	        cout << "agronomia" << endl;
        } else if(g == "amarelo") {
	        cout << "vale" << endl;
        } else cout << "gatou" << endl;
	}
	
	return 0;
}
