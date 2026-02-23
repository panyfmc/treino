#include <bits/stdc++.h>
using namespace std;
// passos para chegar na posição (0, 0) em um quadrado
int coord(int a, int b) {
   if (a == 0 || b == 0) {
       return 1;
   }
   return coord(a, b-1) + coord(a-1, b);
}

int main() {
	int x = 0, y = 4;
	coord(x, y);
	cout << x << " " << y << " " << coord(x, y) << endl;

}
