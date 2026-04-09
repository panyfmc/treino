#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define _ ios_base::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    _ 
    vector<string> regioesnorte = {"roraima", "acre", "amapa", "amazonas", "para", "rondonia", "tocantins"};
    
    string estado;
    cin >> estado;
    
    for(const string &regiao : regioesnorte) {
        if(estado == regiao) {
            cout << "Regiao Norte" << endl;
            return 0;
        }
    }
    cout << "Outra regiao" << endl;

    return 0;

}
 