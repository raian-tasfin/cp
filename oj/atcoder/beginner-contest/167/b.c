#include <stdio.h>
#include <stdlib.h>
#include <iso646.h>
#include <stdbool.h>

#define int int64_t

#define SIZE 3

int max(int a, int b) {
        return a > b ? a : b;
}
int min(int a, int b) {
        return a < b ? a : b;
}

int solve(void) {
        int consts[] = {1, 0, -1};
        int nums[SIZE];
        int k;
        int sum=0;

        for(int i=0; i<SIZE; i++) {
                scanf("%ld", &nums[i]);
        }
        scanf("%ld", &k);
        for(int i=0; i<SIZE; i++) {
                sum += min(k, nums[i]) * consts[i];
                k = max(k-nums[i], 0);
        }
        return sum;
}

int32_t main(void) {
        printf("%ld\n", solve());

        return 0;
}
