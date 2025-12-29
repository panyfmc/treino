#include <iostream>

using namespace std;

int main() {
    int n; cin >> n;
    int value = 0;
    bool a = false;
    bool b = false;
    while(n--) {
        cin >> value;
        if (value == 1) {
            a = !a;
            value = 0;
        } else {
            a = !a;
            b = !b;
            value = 0;
        }
    }
    cout << a << endl;
    cout << b << endl;

    return 0;
}