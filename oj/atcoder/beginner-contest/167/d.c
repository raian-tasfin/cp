#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <iso646.h>
#include <stdbool.h>
#include <inttypes.h>

#define int uint64_t
#define fmtInt "%"PRIu64""

#define maxTownCnt 200000

int childList[maxTownCnt+20];
bool visited[maxTownCnt+20];
int path[maxTownCnt+20];
int pathIndx[maxTownCnt+20];

int solve(void) {
        memset(childList, 0, sizeof(childList));
        memset(visited, false, sizeof(visited));
        memset(path, 0, sizeof(path));
        memset(pathIndx, 0, sizeof(pathIndx));
        childList[0] = 1;

        int townCnt, stepCnt;
        scanf(fmtInt" "fmtInt, &townCnt, &stepCnt);
        stepCnt++;
        for(size_t i=1; i<=townCnt; i++)
                scanf(fmtInt, &childList[i]);

        int currentNode = 0;
        int cycleHead = 0;
        int pathTop = 0;
        while(stepCnt > 0) {
                currentNode = childList[currentNode];
                stepCnt--;
                if(visited[currentNode]) {
                        cycleHead = currentNode;
                        break;
                }
                visited[currentNode] = true;
                pathIndx[currentNode] = pathTop;
                path[pathTop++] = currentNode;
        }

        if(cycleHead == 0)
                return currentNode;
        int topIndx = pathIndx[currentNode];
        int cycleLen = pathTop - topIndx;
        int cycleIndx = stepCnt % cycleLen;
        int ansIndx = cycleIndx + topIndx;

        return path[ansIndx];
}
int32_t main(void) {
        printf(fmtInt"\n", solve());

        return 0;
}
