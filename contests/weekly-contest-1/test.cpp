#include <bits/stdc++.h>
using namespace std;
#define newline '\n'

const int maxPrime = 320000;


int main() {
        int primeCnt = 0;
        for(int i=0; i<=maxPrime; i++){
                if(isPrime(i)) {
                        // cout<< i << newline;
                        primeCnt++;
                }
        }
        cout<< primeCnt << newline;

        return 0;
}
