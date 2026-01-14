#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n; cin >> n;
    vector<long> v;
    v.reserve(n);

    while(n--) {
        int p; cin >> p;
        v.push_back(p);
    }

    if (v.size() < 1) {
        cout << "Yes" << endl;
        return 0;
    }

    for (size_t i = 1; i < v.size(); i++) {
        if (v[i] <= v[i-1]) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;

    return 0;
}