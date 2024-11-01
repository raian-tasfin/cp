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

vector<int> powers;
deque<int> available;

int solve_case(){
        powers.clear();
        available.clear();

        int num_players = next<int>();
        int power_opponent = next<int>();

        repeat(num_players, tmp_it){
                int power = next<int>();
                powers.emplace_back(power);
        }
        sort(begend(powers));
        for(auto &it: powers)
                available.push_back(it);

        int cnt = 0;
        while(not available.empty()){
                int current_large = available.back();
                int tmp_power = power_opponent - current_large;
                available.pop_back();
                while(tmp_power >= 0 and not available.empty()){
                        tmp_power -= current_large;
                        available.pop_front();
                }
                if(tmp_power < 0)
                        cnt++;
        }

        return cnt;
}

int32_t main(){
        ios_base::sync_with_stdio(0);
        cout<< solve_case() << newline;

        return 0;
}
