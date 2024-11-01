#include <stdio.h>

int main(void)
{
        int a, b, caseCnt, caseNo;
        scanf("%d", &caseCnt)
        for(caseNo = 1; caseNo <= caseCnt; caseNo++)
        {
                scanf("%d %d", &a, &b);
                printf("Case %d: %d\n", caseNo, a+b);
        }

        return 0;
}
