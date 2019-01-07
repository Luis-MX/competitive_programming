#include <iostream>
#include <bitset>

using namespace std;

const int MAX = 1000000;
bitset<MAX + 1> primos; // Usa 8 veces menos espacio que un arreglo de booleano

void iniciar_criba() {
	primos.set(); // para asignar inicialmente todos los numeros como primos
	primos.set(0, false); // excepto el 0 y el 1
	primos.set(1, false);
	for (int i = 2; i <= MAX; i++) { // empezamos desde el numero 2
		if (primos[i]) { // verificamos que no haya sido marcado
			for (int j = i + i; j <= MAX; j = j + i) {
				primos.set(j, false); // marcamos los multiplos
			}
		}
	}
}
int main (){
	iniciar_criba();

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			printf("[%3d%6s]", (i * 10) + j, primos[(i * 10) + j] ? " ** " : "");
		}
		printf("\n");
	}
	return 0;
}