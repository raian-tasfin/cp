#include <stdio.h>
#include <stdbool.h>

#define MAX_LEN 15
char firstStr[MAX_LEN];
char secondStr[MAX_LEN];

bool solve(void) {
        scanf("%s\n%s", firstStr, secondStr);
        for(int i=0; firstStr[i]; i++)
                if(firstStr[i] != secondStr[i])
                        return false;
        return true;
}

int main(void) {
        printf("%s\n", solve() ? "Yes" : "No");

        return 0;
}
