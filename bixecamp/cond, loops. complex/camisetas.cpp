#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int t = 0, p = 0, m = 0;
    int somap = 0, somam = 0;
    while(n--) {
        cin >> t;
        if(t == 1) {
            somap++;
            t = 0;
        } else {
            somam++;
            t = 0;
        }
    }
    cin >> p >> m;
    if (p >= somap && m >= somam) {
        cout << "S" << endl;
    } else {
        cout << "N" << endl;
    }

    return 0;
}