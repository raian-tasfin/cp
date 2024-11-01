#include <stdio.h>
#define MAX_STRING_SIZE 100

char inputString[MAX_STRING_SIZE+5];
int cntCharOccurance[28];

int main(void) {
        for(int i=0; i<2; i++) {
                scanf("%s", inputString);
                for(int j=0; inputString[j]; j++) {
                        cntCharOccurance[inputString[j]-'A']++;
                }
        }
        scanf("%s", inputString);
        for(int i=0; inputString[i]; i++) {
                cntCharOccurance[inputString[i]-'A']--;
        }
        for(int i=0; i<26; i++) {
                if(cntCharOccurance[i] != 0) {
                        printf("NO\n");
                        return 0;
                }
        }
        printf("YES\n");

        return 0;
}
