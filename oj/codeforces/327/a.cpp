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

vector<int> arr;
vector<int> changeSum;
int initialSum=0;

void solve_case(){
        int n = next<int>();
        repeat(n, i) {
                int var = next<int>();
                initialSum += var;
                arr.emplace_back(var);
                changeSum.emplace_back(var == 0 ? 1 : -1);
        }
        int globalMax=-250;
        int localMax=-250;
        for(auto &it:changeSum) {
                localMax = max(it, localMax+it);
                globalMax = max(globalMax, localMax);
        }
        cout<< globalMax + initialSum << newline;

        return;
}

int32_t main(){
        ios_base::sync_with_stdio(0);
        solve_case();

        return 0;
}
