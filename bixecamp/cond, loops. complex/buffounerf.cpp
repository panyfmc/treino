#include <iostream>

using namespace std;

/*
Dados os valores iniciais de N e D, e os novos valores M e P depois das mudanças,
imprima "BUFF", se o dano total da habilidade é maior que o anterior, ou "NERF" se
o dano total da habilidade for menor que o anterior.
n m     numero de projéteis
d p     dano

*/

int main() {
    int n, d, m, p; cin >> n >> d >> m >> p;
    int result = 0, olddano = 0, newdano = 0;
    olddano = n*d;
    newdano = m*p;
    if(newdano > olddano) {
        cout << "BUFF" << endl;
    } else {
        cout << "NERF" << endl;
    }
    
    return 0;
}