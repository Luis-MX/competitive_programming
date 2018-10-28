#include <bits/stdc++.h>

using namespace std;

typedef pair<int,int> ii;
// Arreglo que sirve para verificar que no se
// sumen elementos colindantes
int indices[4];
// Matriz que almacena los 2 elementos
// mayores de cada fila
ii matriz [4][2];
int sumaMaxima(int i, int j, int res);

int main() {
    int c; // cantidad de numeros por fila
    // Archivo de prueba de entrada
    freopen("../in.txt", "r", stdin);
    scanf("%d", &c);
    int num = -1;
    memset(matriz, 0, sizeof(matriz));
    memset(indices, -1, sizeof(indices));
    // Lectura de primera fila
    for (int i = 0; i < c; ++i) {
        scanf("%d", &num);
        // If Else que asegura que la matriz
        // solo tenga los 2 numeros mas grandes de cada fila
        if (num > matriz[0][0].first) {
            matriz[0][0] = ii(num, i);
        } else if (num > matriz[0][1].first) {
            matriz[0][1] = ii(num, i);
        }
    }
    // Lectura de la segunda fila
    for (int i = 0; i < c; ++i) {
        scanf("%d", &num);
        if (num > matriz[1][0].first) {
            matriz[1][0] = ii(num, i);
        } else if (num > matriz[1][1].first) {
            matriz[1][1] = ii(num, i);
        }
    }
    // Lectura de la tercera fila
    for (int i = 0; i < c; ++i) {
        scanf("%d", &num);
        if (num > matriz[2][0].first) {
            matriz[2][0] = ii(num, i);
        } else if (num > matriz[2][1].first) {
            matriz[2][1] = ii(num, i);
        }
    }
    // Lectura de la quinta fila
    for (int i = 0; i < c; ++i) {
        scanf("%d", &num);
        if (num > matriz[3][0].first) {
            matriz[3][0] = ii(num, i);
        } else if (num > matriz[3][1].first) {
            matriz[3][1] = ii(num, i);
        }
    }
    //
    int res = max(sumaMaxima(0,0,0), sumaMaxima(0,1,0));
    printf("%d\n", res);
    return 0;
}

int sumaMaxima(int i, int j, int res) {
    // Caso base: ya se sumaron todas las filas
    if (i == 4)
        return res;
    int indice = matriz[i][j].second;
    if (i > 0)
        // Solo a partir de la segunda fila podemos
        // verificar si el indice anterior se repite
        if (indices[i - 1] == indice) {
            // El indice se repite: probar con el siguiente
            // elemento mayor de la misma fila
            if (j == 1) return sumaMaxima(i, 0, res);
            else return sumaMaxima(i, 1, res);
        }
    res += matriz[i][j].first;
    indices[i] = indice;
    // verificar el numero mayor de la siguiente fila
    return sumaMaxima(i+1, 0, res);
}