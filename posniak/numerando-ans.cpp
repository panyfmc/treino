#include <bits/stdc++.h>
#define _  ios_base::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
#define endl '\n'
#define pb push_back

int main() {
    _
    int r, n; 
    int temp = 0;
    int cnt = 0;
    int c = 0;
    bool flag = false;
    int sufixo = 27;
    while(cin >> r >> n && r != 0 && n != 0) {
        cnt++;
        if(n >= r) cout << "Case " << cnt << ":" << " " << 0 << endl;
        else {
            for(int i = 2; i <= sufixo; i++) {
                c++;
                temp = n*i;
                if(temp >= r) {
                    flag = true;
                    break;
                }
            }
            if(flag) cout << "Case " << cnt << ":" << " " << c << endl;
            else cout << "Case " << cnt << ":" << " " << "garantido" << endl;
            temp = 0;
            flag = false;
            c = 0;
        }
    }
    
    return 0;
}
