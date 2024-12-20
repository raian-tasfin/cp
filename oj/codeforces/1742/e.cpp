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

vector<int> cumulativeHeight;
vector<int> maxHeightTillIndx;

void solve_case(){
        cumulativeHeight.clear();
        maxHeightTillIndx.clear();
        cumulativeHeight.emplace_back(0);
        maxHeightTillIndx.emplace_back(0);

        auto stepCnt = next<int>();
        auto queryCnt = next<int>();

        repeat(stepCnt, it) {
                auto currentStepHeight = next<int>();
                auto currentMaxHeight = max(maxHeightTillIndx.back(), currentStepHeight);
                maxHeightTillIndx.emplace_back(currentMaxHeight);
                cumulativeHeight.emplace_back(cumulativeHeight.back() + currentStepHeight);
        }
        repeat(queryCnt, indx) {
                auto legHeight = next<int>();
                auto stepHigherThanLegIndx = upper_bound(begend(maxHeightTillIndx), legHeight) - maxHeightTillIndx.begin();
                cout<< cumulativeHeight[stepHigherThanLegIndx-1] << " ";
        }
        cout<< newline;

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
