#include <iostream>
#include <string>

using namespace std;

int main() {
    int n; cin >> n;
    string g; cin >> g;     // gabarito
    string r; cin >> r;     // resposta
    int count = 0;
   
    for(int i=0; i<n; i++) {
        if (g[i] == r[i]) {
            count++;
        }
    }
    cout << count << endl;

    return 0;
}