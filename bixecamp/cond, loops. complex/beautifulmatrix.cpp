#include <iostream>
#include <vector>
using namespace std;

int main() {
    int m[5][5];
    int i1 = 0, j1 = 0, dist = 0;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> m[i][j];
           if(m[i][j] != 0) {
            i1 = i;
            j1 = j;
            } 

        }
       
    }
    dist = (i1-2) + (j1-2);
    cout << dist << endl;

    
    return 0;
}