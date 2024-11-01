#include <stdio.h>
#include <stdlib.h>
#include <iso646.h>
#include <stdbool.h>

int main(void) {
        int maxHeightIndx = 203;
        int maxHeight = -1;
        int minHeight = 101;
        int minHeightIndx = -1;

        int n;
        scanf("%d", &n);
        for(int i=1; i<=n; i++) {
                int height;
                scanf("%d", &height);
                if(height > maxHeight) {
                        maxHeight = height;
                        maxHeightIndx = i;
                }
                if(height <= minHeight) {
                        minHeight = height;
                        minHeightIndx = i;
                }
        }
        int ans = abs(maxHeightIndx-1) + abs(n-minHeightIndx);
        if(minHeightIndx < maxHeightIndx)
                ans--;
        printf("%d\n", ans);

        return 0;
}
