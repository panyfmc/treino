#include <iostream>
#include <iomanip>
using namespace std;

/*
Faça um programa que leia dois números reais A e B e imprima a divisão de A por B
*/

int main() {
    double a, b;
    cin >> a >> b;
    cout << fixed << setprecision(2);
    cout << a/b << endl;

    return 0;
}