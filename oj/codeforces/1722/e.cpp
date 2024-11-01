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

const int limit = 1000;
int cumulated_areas[limit+13][limit+13];

void solve_case(){
        for(int i=0; i<=limit; i++)
                for(int j=0; j<=limit; j++)
                        cumulated_areas[i][j] = 0;

        int num_rectangles = next<int>();
        int num_queries = next<int>();
        repeat(num_rectangles, tmp_it){
                int height = next<int>();
                int width = next<int>();
                cumulated_areas[height][width] += height * width;
        }
        for(int i=1; i<=limit; i++){
                for(int j=1; j<=limit; j++){
                        cumulated_areas[i][j] +=
                                cumulated_areas[i-1][j]
                                + cumulated_areas[i][j-1]
                                - cumulated_areas[i-1][j-1];
                }
        }
        repeat(num_queries, tmp_it){
                int hs, ws, hb, wb;
                cin>> hs >> ws >> hb >> wb;
                int ans = cumulated_areas[hb-1][wb-1]
                        - cumulated_areas[hb-1][ws]
                        - cumulated_areas[hs][wb-1]
                        + cumulated_areas[hs][ws];
                cout<< ans << newline;
        }


        return;
}

int32_t main(){
        ios_base::sync_with_stdio(0);

        int32_t T = next<int32_t>();
        for(int32_t t=1; t<=T; t++){
                solve_case();
        }

        return 0;
}
