#include<bits/stdc++.h>
using namespace std;

#define newline '\n'
#define debug(x) cout<< ">>> " << #x << " " << x << newline;
#define begend(obj) (obj).begin(), (obj).end()
#define rev_begend(obj) (obj).rbegin(), (obj).rend()

#define int int64_t

template<typename T>
T next(){
        T tmp;
        cin>> tmp;
        return tmp;
}

template<typename T1, typename T2>
pair<T1, T2> next(){
        T1 t1 = next<T1>();
        T2 t2 = next<T2>();
        return {t1, t2};
}

#define repeat(n, it)                           \
        for(auto it=n-n; it < n; it++)

template<typename T>
bool pair_strict_between(T lhs, T mhs, T rhs){
        return lhs.first < mhs.first and mhs.first < rhs.first
                and lhs.second < mhs.second and mhs.second < rhs.second;
}

template<typename T>
bool strict_between(T lhs, T mhs, T rhs){
        return lhs < mhs and mhs < rhs;
}

int solve_case(){
        int num_row = next<int>();
        int num_col = next<int>();

        if(num_row==1 and num_col==1)
                return 0;

        if(num_col == 1)
                return num_row-1;

        if(num_row==2 and num_col==1)
                return 1;

        return (num_col-1)*num_row;
}

int32_t main(){
        ios_base::sync_with_stdio(0);
        cout << solve_case() << newline;

        return 0;
}
