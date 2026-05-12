#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define endl '\n'

int main() {
    _ 
    // num jogadores num quadrados na trilha
	int p, s;
	// posicao armadilhas
	int t1, t2, t3;
	// quantidade de rodadas dos dados
	int n;
	// numero dos dados
	int d1, d2;
	
	while(cin >> p >> s && p != 0 && s != 0) {
	    cin >> t1 >> t2 >> t3;
	    cin >> n;
	    bool preso = false;
	    bool flag = false;
	    vector<int> rank(p, 0);
	    vector<bool> armadilha(p, false);
	    int ganhador = 0;
	    int vez = 0;    // qual jogador é
	    
	    for(int i = 0; i < n; i++) {
	        cin >> d1 >> d2;
	        if(flag) continue;
	        while(armadilha[vez]) {
	            armadilha[vez] = false;
	            vez = (vez+1)%p;
	        }
	        int casas = 0; // soma dados
	        casas = d1 + d2;
	        rank[vez] += casas;
	        if(rank[vez] == t1 || rank[vez] == t2 || rank[vez] == t3) armadilha[vez] = true;
	        if(rank[vez] > s) {
	            ganhador = vez + 1;
	            flag = true;
	        } 
	        vez = (vez + 1) % p;
	    }
	    cout << ganhador << endl;
	}
	
	return 0;

}
