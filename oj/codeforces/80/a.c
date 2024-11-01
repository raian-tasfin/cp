#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <iso646.h>

bool isPrime(int n) {
        if(n<2)
                return false;
        if(n==2)
                return true;
        for(int i=2; i<n; i++)
                if(n%i==0)
                        return false;
        return true;
}
int main(void) {
        int n, m, k;
        scanf("%d %d", &n, &m);
        k = n+1;
        while(true) {
                if(isPrime(k))
                        break;
                k++;
        }
        if(k!=m)
                printf("NO\n");
        else
                printf("YES\n");

        return 0;
}
