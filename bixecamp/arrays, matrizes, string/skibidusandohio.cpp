#include <iostream>
#include <string>
using namespace std;


int main() {
    int t; cin >> t;
    string palavra;
    
    while(t--) {
        cin >> palavra;
        int tamanho = 0;
        tamanho = palavra.length();
        bool achou = false;
        for(int i=0; i<tamanho-1; i++) {
            if(palavra[i] == palavra[i+1]) {
                achou = true;
            }
        }

        if(achou) {
            cout << 1 << endl;
        } else {
            
            cout << tamanho << endl;
        }    
    }

    return 0;

}