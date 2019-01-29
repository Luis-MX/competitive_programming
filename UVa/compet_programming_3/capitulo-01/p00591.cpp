#include <stdio.h>
#include <math.h>

int n = 0, suma = 0, promedio = 0, movimientos = 0, i = 0, cont = 0;
int nums[55];

int main() {
    scanf("%d", &n);
    while(n != 0){
        cont ++;
        suma = 0;
        for(i = 0; i < n; i++)
        {
            scanf("%d", &nums[i]);
            suma += nums[i];
        }
        promedio = suma / n;
        movimientos = 0;
        for(i = 0; i < n; i++)
        {
            movimientos += abs(promedio - nums[i]);
        }
        printf("Set #%d\n", cont);
        printf("The minimum number of moves is %d.\n\n", movimientos/2);
        scanf("%d", &n);
    }
}