// Uva 10337 Flight Planner
/**
   Miercoles 15 de Agosto de 2018.
   Primer ejemplo de DP.
 */
#include <bits/stdc++.h>

#define INF 70001

using namespace std;

int memo[12][1003];
int x, ws2[12][1003], nc;

int f(int altura, int dist) {
    if (dist > x || altura < 0 || altura > 9 || (dist == x && altura != 0))
    {
        return INF;
    }
    if (dist == x && altura == 0)
    {
        return 0;
    }
    if (memo[altura][dist] == -1)
    {
        memo[altura][dist] = min(f(altura + 1, dist + 1) + 60 - ws2[altura][dist],
            min(30 - ws2[altura][dist] + f(altura, dist + 1),
                20 - ws2[altura][dist] + f(altura - 1, dist + 1)));
    }
    return memo[altura][dist];
}

int main(int argc, char const *argv[])
{
    scanf("%d", &nc);
    while ( nc-- ) {
        memset(memo, -1, sizeof (memo));
        scanf("%d", &x);
        x /= 100;
        for (int i = 9; i >= 0; i--) {
            for (int j = 0; j < x; ++j)
            {
                scanf("%d", &ws2[i][j]);
            }
        }
        printf("%d\n\n", f(0, 0));
    }
    return 0;
}