#include <iostream>
using namespace std;

/*
A entrada consiste em duas linhas. A primeira linha possui apenas um valor N,
representando a quantidade de valores que você deve ler. A segunda linha possui 
N números inteiros separados por um espaço em branco.
*/

int main() {
    int a; cin >> a;
    int soma = 0;
    while(a--) {
        int n;
        cin >> n;
        soma += n;
    }
    cout << soma << endl;

    return 0;
}