#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define pb push_back
#define int long long
#define _ ios_base::sync_with_stdio(false); cin.tie(nullptr);


void hanoi(int n, int start, int mid, int end, vector<int> &l, vector<int> &r) {
    if(n == 0) return;
   
    hanoi(n-1, start, end, mid, l, r);
    l.pb(start);
    r.pb(end);

    hanoi(n-1, mid, start, end, l, r);
}

signed main() {
    _
    int n; cin >> n;
    vector<int> left;
    vector<int> right;
    hanoi(n, 1, 2, 3, left, right);
    int tam = left.size();
    cout << tam << endl;
    for(int i = 0; i < tam; i++) {
        cout << left[i] << " " << right[i] << endl;
    }

}
