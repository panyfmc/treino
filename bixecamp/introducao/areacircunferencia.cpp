#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

// pi*r^2
int main() {
    float r; cin >> r;
    float pi = 3.1416;
    double area;
    area = pi*(pow(r, 2));
    cout << fixed << setprecision(2);
    cout << area << endl;

    return 0;
}