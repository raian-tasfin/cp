#include <stdio.h>

void toLower(char *ch) {
        if('A' <= ch[0] && ch[0] <= 'Z')
                ch[0] = ch[0] - 'A' + 'a';
}

int main(void) {
        char str1[105], str2[105];
        scanf("%s\n%s", str1, str2);
        for(int i=0; str1[i]; i++) {
                toLower(str1+i);
                toLower(str2+i);
                if(str1[i] < str2[i]) {
                        printf("-1\n");
                        return 0;
                } else if(str1[i] > str2[i]) {
                        printf("1\n");
                        return 0;
                }
        }
        printf("0\n");

        return 0;
}
