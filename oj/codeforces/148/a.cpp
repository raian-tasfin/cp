#include<bits/stdc++.h>
using namespace std;

#define newline '\n'
#define debug(x) cout<< ">>> " << #x << " " << x << newline;
#define begend(obj) (obj).begin(), (obj).end()
#define rev_begend(obj) (obj).rbegin(), (obj).rend()

// #define int int64_t

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

int lcm(int a, int b, int c) {
        return lcm(lcm(a,b), c);
}
int lcm(int a, int b, int c, int d) {
        return lcm(lcm(a, b, c), d);
}

void solve(){
        int k, l, m, n, d;
        cin>> k >> l >> m >> n >> d;
        int sum = 0;
        sum += d/k + d/l + d/m + d/n;
        sum -= d/lcm(k,l) + d/lcm(k, m) + d/lcm(k, n) + d/lcm(l, m) + d/lcm(l, n) + d/lcm(m, n);
        sum += d/lcm(k, l, m) + d/lcm(k, l, n) + d/lcm(k, m, n) + d/lcm(l, m, n);
        sum -= d/lcm(k, l, m, n);
        cout<< sum << newline;

        return;
}

int32_t main(){
        ios_base::sync_with_stdio(0);

        solve();

        return 0;
}
