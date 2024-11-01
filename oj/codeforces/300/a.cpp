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

void solve_case(){
        int n = next<int>();
        repeat(n, i) {
                int var = next<int>();
                arr.emplace_back(var);
        }
        sort(begend(arr));
        int zeroIndx = lower_bound(begend(arr), 0) - arr.begin();
        int zeroIndxLow = zeroIndx;
        int zeroIndxHigh = zeroIndx;
        int negCnt = zeroIndx;
        int posCnt = n - zeroIndx - 1;

        if(negCnt % 2 == 0) {
                zeroIndxLow--;
        }
        cout<< 1 << " " << arr[0] << newline;
        posCnt += zeroIndxLow - 1;
        cout<< posCnt;
        for(int i=1; i<zeroIndxLow; i++)
                cout<< " " << arr[i];
        for(int i=zeroIndxHigh+1; i<arr.size(); i++)
                cout<< " " << arr[i];
        cout<< newline;
        cout<< zeroIndxHigh - zeroIndxLow + 1;
        for(int i=zeroIndxLow; i<=zeroIndxHigh; i++)
                cout<< " " << arr[i];
        cout<< newline;

        return;
}

int32_t main(){
        ios_base::sync_with_stdio(0);

        solve_case();

        return 0;
}

/*
 0 1 2
-1 0 1
*/
