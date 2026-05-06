#include <bits/stdc++.h>
#define _  ios_base::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
#define endl '\n'
#define pb push_back
// W H Q E S T X    
//     
int main() {
    _
    string c;
    int sum = 0;
    int cnt = 0;
    
    while(getline(cin, c) && c != "*") {    // pega a linha inteira
        for(char l : c) {
            if(l == '/') {
                if(sum == 64) {
                    cnt++;
                    //sum = 0;
                }
                sum = 0;
            } else {
                if(l == 'W') sum += 64;
                else if(l == 'H') sum += 32;
                else if(l == 'Q') sum += 16;
                else if(l == 'E') sum += 8;
                else if(l == 'S') sum += 4;
                else if(l == 'T') sum += 2;
                else if (l == 'X') sum += 1;
            }
            
        }
        cout << cnt << endl;
        sum = 0;
        cnt = 0;
    }
    
    return 0;
}
