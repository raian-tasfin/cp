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

deque<int> fnValues;

int solve_case(){
        repeat(6, it) {
                auto tmp = next<int>();
                fnValues.emplace_back(tmp);
        }
        auto targetPos = next<int>();
        if(targetPos < 6)
                return fnValues[targetPos];
        int currentPos = ;
        while(targetPos--) {
                int lastValue = 0
                for(int i=1; i<=6; i++)
                        lastValue += fnValues[fnValues.size()-1];
                fnValues.push_back(lastValue);
                fnValues.pop_front();
        }

        return fnValues.back();
}

int32_t main(){
        ios_base::sync_with_stdio(0);

        int32_t T = next<int32_t>();
        for(int32_t t=1; t<=T; t++){
                cout<< "Case " << t << ": "
                    << solve_case() << newline;
        }

        return 0;
}
