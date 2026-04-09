#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define _ ios_base::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    _ 
    int a, b, c;
    cin >> a >> b >> c;
    // iguais
    if(a == b && b == c) {
        cout << "3" << endl;
        // duas caixas ao lado cabem na terceira caixa
    } else if((a+b) < c || (b+c) < a || (a+c) < b) {
        cout << "1" << endl;
    } else if(a < b && b < c || a < c && c < b || c < b && b < a) {
        cout << "1" << endl;
    } else {
        cout << "2" << endl;
    }
    return 0;

}
 