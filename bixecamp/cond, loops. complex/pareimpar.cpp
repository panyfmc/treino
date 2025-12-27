#include <iostream>
using namespace std;

/*
Bino sempre escolhe par e Cino sempre escolhe ímpar.
*/

int main() {
    int b, c; cin >> b >> c;

    if ((b + c) % 2 == 0) {
        cout << "Bino" << endl;
    } else {
        cout << "Cino" << endl;
    }

    return 0;
}