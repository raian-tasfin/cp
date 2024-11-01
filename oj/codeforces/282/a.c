#include <stdio.h>

int main(void) {
        char inputBuff[5];
        int cntStatements;
        int x = 0;

        scanf("%d", &cntStatements);
        while(cntStatements--) {
                scanf("%s", inputBuff);
                x += (inputBuff[0] == '+' || inputBuff[2] == '+' ? 1 : -1);
        }
        printf("%d\n", x);

        return 0;
}
