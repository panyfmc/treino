#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
OBI 2007
*/

int main() {
    int l; cin >> l;
    const int n = l;
    const int m = l;
    int square[n][m];

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin >> square[i][j];
        }
    }

    int diagonal1 = 0, diagonal2 = 0, rline = 0, rcolumn = 0;

    for(int i=0; i<n; i++) {
        int line = 0, column = 0;
        rline = 0;
        rcolumn = 0;
        for(int j=0; j<m; j++) {
            line += square[i][j];
            column += square[j][i];
            rline = line;
            rcolumn = column;
        }
    }
// n -1 - i  
    for(int i=0; i<n; i++) {
        diagonal1 += square[i][i];
        diagonal2 += square[i][m-1-i];
    }

    if (rline == rcolumn && rline == diagonal1 && rline == diagonal2) {
        cout << rline << endl;
        return 0;
    } else {
        cout << -1 << endl;
        return 0;
    }

    return 0;
}