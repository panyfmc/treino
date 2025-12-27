#include <iostream>
using namespace std;

/*
Faça um programa para ler um inteiro x. Imprima a mensagem "positivo" se o valor for positivo. 
Imprima a mensagem "negativo" caso o valor seja negativo. Imprima a mensagem "nulo" se o valor for zero.
*/

int main() {

    int x; cin >> x;
    if(x > 0) {
        cout << "positivo" << endl;
    } else if(x < 0) {
        cout << "negativo" << endl;
    } else {
        cout << "nulo" << endl;
    }

    return 0;
}