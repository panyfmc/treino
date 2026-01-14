#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
    int n; cin >> n;
    vector<long> hills;
    hills.reserve(n);
    long result = 0;
    while(n--) {    
        long h; cin >> h;
        hills.push_back(h);
    }

    if (hills.size() < 2) {
        cout << 0 << endl;
        return 0;
    }

    sort(hills.begin(), hills.end());
    
    for (int i = 1; i < hills.size(); i++) {
        result += (hills[i] - hills[0]);

    } 

    cout << result << endl;

    return 0;
}