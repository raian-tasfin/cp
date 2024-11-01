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

double solve(){
        auto n = next<double>();
        auto V = next<double>();
        vector<double> aArr;
        vector<double> bArr;
        repeat(n, i)
                aArr.emplace_back(next<double>());
        repeat(n, i)
                bArr.emplace_back(next<double>());
        const double maxB = 100;
        const double minA = 1;
        const double maxBA = 100;
        double minBA = maxBA;
        for(int indx=0; indx<n; indx++)
                minBA = min(minBA, bArr[indx]/aArr[indx]);
        double sum=0;
        double x=minBA;
        for(auto &it: aArr)
                sum += it*x;
        return min(sum, V);
}

int32_t main(){
        ios_base::sync_with_stdio(0);

        printf("%0.4lf\n", solve());

        return 0;
}
