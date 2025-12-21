#include <iostream>
using namespace std;

/*
Escreva um programa que, dada a pressão desejada digitada pelo motorista (n) e a pressão do pneu lida pela bomba (m)
indica a diferença entre a pressão desejada e a pressão lida.
*/

int main() {
    int n; cin >> n;        // pressão desejada
    int m; cin >> m;        // pressão do pneu lida pela bomba
    int diferença;
    diferença = n - m;
    cout << diferença << endl;
    return 0;
}