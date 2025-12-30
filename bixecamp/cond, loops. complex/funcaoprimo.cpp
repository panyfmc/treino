#include <iostream>
using namespace std;

/*
 deve imprimir na saída padrão uma única linha contendo "S" caso o 
x seja primo e "N" caso contrário.

numero primo --> divide por 1 ou por ele mesmo
*/

int eh_primo(int n) {
    if(n<= 1) {     // menor ou igual a 1 --> nao eh primo
        cout << "N" << endl;
        return 0;
    } else if(n<= 3) {      // for 2 ou 3 --> eh primo
        cout << "S" << endl;
        return 0;
    } else if(n%2==0 || n%3==0) {   // 3 < n < 5 --> nao eh primo
        cout << "N" << endl;
        return 0;
    }
    for(int i=5; i*i<=n; i+=6) {    // se a condicao i*i<=n for satisfeita entra no loop
        if(n%i==0 || n%(i+2)==0) {  
            cout << "N" << endl;
            return 0;
        }
    }

    cout << "S" << endl;
    return 0;
}


int main() {
    int x; cin >> x;
    eh_primo(x);
    // cout << eh_primo;

    return 0;
}