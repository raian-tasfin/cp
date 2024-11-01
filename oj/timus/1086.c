#include <stdio.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <math.h>

#define not !

#define HIGHEST_CNT 18000
#define HIGHEST_PRIME 170000

bool not_prime[HIGHEST_PRIME+5];
int prime_list[HIGHEST_CNT+10];

void setup_sieve(){
        not_prime[0] = not_prime[1] = true;
        for(int i=4; i<=HIGHEST_PRIME; i+=2)
                not_prime[i]=true;
        int indx = 1;
        prime_list[indx++]=2;
        int limit = sqrt(HIGHEST_PRIME)+10;
        for(int i=3; i<=HIGHEST_PRIME; i+=2){
                if(not not_prime[i]){
                        prime_list[indx++]=i;
                        if(i<=limit){
                                for(int j=i*i; j<=HIGHEST_PRIME; j+=i+i){
                                        not_prime[j]=true;
                                }
                        }
                }
        }
}

int main(void){
        setup_sieve();
        int T;
        scanf("%d", &T);
        while(T--){
                int n;
                scanf("%d", &n);
                printf("%d\n", prime_list[n]);
        }

        return 0;
}
