#include <iostream>
using namespace std;

// Dadas as características da rodovia e os custos com gasolina e com pedágios, calcule o custo total da viagem.



int main() {
    int L, D; cin >> L >> D;    // comprimento da estrada e a distância entre pedágios
    int K, P; cin >> K >> P;    // custo por quilômetro percorrido e o valor de cada pedágio

    int qpedagio, vkm, vpedagio, total;
    qpedagio = L/D;
    vkm = K*L;
    vpedagio = P*qpedagio;
    total = vkm + vpedagio;
    cout << total << endl;
    
    return 0;
}