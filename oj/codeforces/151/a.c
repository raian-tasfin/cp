#include <stdio.h>

int min(int a, int b) {
        return a < b ? a : b;
}
int min3(int a, int b, int c) {
        return min(min(a, b), c);
}

int main(void) {
        int n, k, l, c, d, p, nl, np;
        scanf("%d %d %d %d %d %d %d %d", &n, &k, &l, &c, &d, &p, &nl, &np);

        int drinkCnt = k*l / nl;
        int limeDiceCnt = c * d;
        int saltCnt = p / np;

        printf("%d\n", min3(drinkCnt/n, limeDiceCnt/n, saltCnt/n));

        return 0;
}
