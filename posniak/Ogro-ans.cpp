#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define _ ios_base::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    _ 
    int e, d;
    cin >> e >> d;
    if(e > d) {
        cout << e + d << endl;
    } else {
        cout << 2*(d - e) << endl;
    }
    return 0;

}
 