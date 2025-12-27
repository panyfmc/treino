#include <iostream>
#include <cmath>
using namespace std;

// L comprimento
// N tapetes
// Seu programa deve produzir uma única linha, contendo apenas um inteiro, a maior soma possível das áreas dos tapetes.
int main() {
    int L, N; cin >> L >> N;
    int bigger;
    long long result;
    bigger = L-(N-1);   // remove do comprimento apenas a quantidade de N-1, exclui o bigger do N
    result = pow(bigger, 2) + (N-1);        // todos os (N-1) == 1, não precisa elevar ao quadrado
    cout << result << endl;

    return 0;
}