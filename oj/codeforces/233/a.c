#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <iso646.h>

#define MAXSIZE 100

int main(void) {
        int arr[MAXSIZE+10];
        int n;
        scanf("%d", &n);
        if(n%2==1) {
                printf("-1\n");
                return 0;
        }
        for(int i=1; i<=n; i++)
                arr[i] = i;
        for(int i=1; i<=n; i+=2) {
                int tmp=arr[i+1];
                arr[i+1] = arr[i];
                arr[i] = tmp;
        }
        for(int i=1; i<=n; i++)
                printf("%d ", arr[i]);
        printf("\n");

        return 0;
}
