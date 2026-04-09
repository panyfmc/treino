#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define _ ios_base::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    _ 
    double salario;
    cin >> salario;
    double novosalario = 0;
    double reajuste = 0;
    string percentual;
    if(salario < 400.01) {
        novosalario = salario + (salario * 0.15);
        reajuste = salario * 0.15;
        percentual = "15 %";
    } else if(salario < 800.01) {
        novosalario = salario + (salario * 0.12);
        reajuste = salario * 0.12;
        percentual = "12 %";
    } else if(salario < 1200.01) {
        novosalario = salario + (salario * 0.1);
        reajuste = salario * 0.10;
        percentual = "10 %";
    } else if(salario < 2000.01) {
        novosalario = salario + (salario * 0.07);
        reajuste = salario * 0.07;
        percentual = "7 %";
    } else {
        novosalario = salario + (salario * 0.04);
        reajuste = salario * 0.04;
        percentual = "4 %";
    }
    
    cout << fixed << setprecision(2);
    cout << "Novo salario: " << novosalario << endl;
    cout << "Reajuste ganho: " << reajuste << endl;
    cout << "Em percentual: " << percentual << endl;

    return 0;

}
 