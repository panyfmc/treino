#include <iostream>

using namespace std;

/*
A saída do seu programa deve ser a palavra "Pedro" caso Pedro tenha completado o circuito mais rápido
(ou no mesmo tempo) que Paulo ou "Paulo", caso Paulo tenha sido o mais rápido.
Exemplos de Entrada	Exemplos de Saída
2.8 3
Pedro
15.3 9.2
Paulo

*/

int main() {
    float a, b;     // paulo e pedro
    cin >> a >> b;
    if(b>=a) {
        cout << "Pedro" << endl;
    } else {
        cout << "Paulo" << endl;
    }

    return 0;
}