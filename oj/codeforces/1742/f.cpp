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

char maxCharInString(const string& src) {
        char currentMaxChar = 0;
        for(auto &it: src)
                currentMaxChar = max(currentMaxChar, it);
        return currentMaxChar;
}

void solve_case(){
        char maxChar[4] = {0, 0, 0, 0};
        int len[4] = {0, 0, 0, 0};

        const int smallIndx = 1;
        const int bigINdx = 2;

        auto queryCnt = next<int>();
        repeat(queryCnt, q) {
                auto strIndx = next<int>();
                auto opCnt = next<int>();
                auto addStr = next<string>();
                len[strIndx] += opCnt * addStr.size();
                maxChar[strIndx] = max(maxChar[strIndx], maxCharInString(addStr));
                if(maxChar[smallIndx] < maxChar[bigINdx])
                        cout<< "YES" << newline;
                else if(maxChar[smallIndx] == maxChar[bigINdx] and len[smallIndx] < len[bigINdx])
                        cout<< "YES" << newline;
                else
                        cout<< "NO" << newline;
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
