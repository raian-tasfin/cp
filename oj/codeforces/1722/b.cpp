#include<bits/stdc++.h>
using namespace std;

#define newline '\n'

template<class T>
T next(){
        T tmp;
        cin>> tmp;
        return tmp;
}

bool solve_case(){
        int32_t len = next<int32_t>();
        string row1 = next<string>();
        string row2 = next<string>();
        for(int32_t i=0; i<len; i++){
                if(max(row1[i], row2[i]) == 'R'
                   and min(row1[i], row2[i]) != 'R'){
                        return false;
                }
        }
        return true;
}

int32_t main(){
        ios_base::sync_with_stdio(0);
        int32_t T = next<int32_t>();
        for(int t=1; t<=T; t++){
                cout<< (solve_case() ? "YES" : "NO") << newline;
        }

        return 0;
}
