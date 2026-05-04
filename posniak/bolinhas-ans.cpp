#include <bits/stdc++.h>
#define _  ios_base::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
#define endl '\n'

int main() {
    _
    int n, v;
    int result = 0;
    bool flag = false;
    
    while(cin >> n >> v) {
        if(n == 0 && v == 0) return 0;
        else {
            for(int k = v; k >= 1; k--) {
                result = 0;
                for(int i = k; i >=1; i--) {
                    for(int j = 0; j < i; j++) {        // somando o quadrado
                        result += i;
                        
                        if(result == n) {
                            flag = true;
                            break;
                        }
                    }
                    if(flag) break;
                }
                if(flag) break;
            }

        }
        if(flag) cout << "possivel" << endl;
        else cout << "impossivel" << endl;
        flag = false;
        result = 0;
        
    }

    return 0;
}