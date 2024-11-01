#include <bits/stdc++.h>
using namespace std;

#define newline '\n'

#define n_lim 11
#define k_lim 21

int64_t fun_nk(int64_t n, int64_t k){
        int64_t res = 1;
        while(n > 0){
                res *= n;
                n = n-k;
        }
        return res;
}

int main(){
        string facs;
        int64_t num;
        cin>> num >> facs;
        cout<< fun_nk(num, facs.size()) << newline;

        return 0;
}
