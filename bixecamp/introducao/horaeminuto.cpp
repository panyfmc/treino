#include <iostream>

using namespace std;

int main() {
    int h, m;
    cin >> h >> m;
    int transform;
    transform = h*60;
    cout << transform+m << endl;
    // 1h = 60m

    return 0;
}