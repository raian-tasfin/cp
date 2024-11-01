#include <stdio.h>

int celingDevide(int a, int d) {
        int ans = a/d;
        if(ans * d < a)
                ans++;
        return ans;
}

int main(void) {
        int n, m, var, mx = 0, indx=0;
        scanf("%d %d", &n, &m);
        for(int i=0; i<n; i++) {
                scanf("%d", &var);
                var = celingDevide(var, m);
                if(var >= mx) {
                        mx = var;
                        indx = i+1;
                }
        }
        printf("%d\n", indx);

        return 0;
}
