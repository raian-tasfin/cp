#include <stdio.h>

int main(void) {
        int num, sum=0, var;
        scanf("%d", &num);
        for(int i=0; i<num; i++) {
                scanf("%d", &var);
                sum += var;
        }
        printf("%0.5lf\n", (double)sum/num);

        return 0;
}
