#include <stdio.h>

int main(void) {
        char inputString[100+5];
        scanf("%s", inputString);
        for(int i=0; inputString[i]; i++) {
                switch(inputString[i]) {
                case 'H':
                case 'Q':
                case '9':
                        printf("YES\n");
                        return 0;
                }
        }
        printf("NO\n");

        return 0;
}
