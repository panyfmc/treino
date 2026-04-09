#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define _ ios_base::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    _ 
    int c, p, f;
    cin >> c >> p >> f;
    if((p/c) >= f) {
        cout << "S" << endl;
    } else {
        cout << "N" << endl;
    }
    return 0;

}
  