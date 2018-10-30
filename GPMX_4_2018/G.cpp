#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	int n;
	for (int i = 1; i <= t; ++i)
	{
		scanf("%d", &n);
		// Cuando el numero es impar la respuesta es dividir el numero entre 2
		if (n % 2 == 1) {
			printf("case %d: %d\n", i, n/2);
		} else {
			// respuesta para numeros pares
		}
	}
	return 0;
}