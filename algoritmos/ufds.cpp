#include <iostream>

using namespace std;

const int N = 6; // numero de nodos

int padre[N + 10];



void init(int n) {
	for (int i = 1; i <= n; ++i) {
		padre[i] = i; // cada nodo es su propio padre
	}
}

int buscar(int x = 3) {
	if (padre[x] == x) return x; // raiz encontrada
	else return padre[x] = buscar(padre[x]); // buscar el padre recursivamente
}

void unir(int x, int y) {// hacer al padre de X, el padre de y
	int u = buscar(x), v = buscar(y);
	padre[u] = v;
}

bool mismoConjunto(int x, int y) {// hacer al padre de X, el padre de y
	int u = buscar(x), v = buscar(y);
	return u == v;
}

int main (){
	printf("\n");
	return 0;
}