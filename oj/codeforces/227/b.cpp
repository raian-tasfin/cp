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

#define MAX_LEN 100000

array<int, MAX_LEN+3> leftDist;

void solve(){
        leftDist.fill(0);

        auto numElems = next<int>();
        for(int i=1; i<=numElems; i++) {
                int num = next<int>();
                leftDist[num] = i;
        }
        auto numQueries = next<int>();
        int totalLeftDist = 0;
        int totalRightDist = 0;
        for(int i=0; i<numQueries; i++) {
                int num = next<int>();
                totalLeftDist += leftDist[num];
                totalRightDist += numElems - leftDist[num] + 1;
        }
        cout<< totalLeftDist << " " << totalRightDist << newline;

        return;
}

int32_t main(){
        ios_base::sync_with_stdio(0);
        solve();

        return 0;
}
