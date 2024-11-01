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

#define highest 1000

array<int, highest+5> highest_indx;
array<bool, highest+5> visited;
vector<int> arr;

void setup() {
        highest_indx.fill(0);
        visited.fill(false);
        arr.clear();
}
void solve_case() {
        setup();

        auto n = next<int>();
        repeat(n, it) {
                auto var = next<int>();
                if(not visited[var]) {
                        visited[var] = true;
                        arr.emplace_back(var);
                }
                highest_indx[var] = it+1;
        }
        sort(begend(arr));
        int ans=-1;
        for(int i=0; i<arr.size(); i++) {
                for(int j=0; j<arr.size(); j++) {
                        if(gcd(arr[i], arr[j]) == 1) {
                                ans = max(ans, highest_indx[arr[i]]+highest_indx[arr[j]]);
                        }
                }
        }
        cout<< ans << newline;
}

int32_t main(){
        ios_base::sync_with_stdio(0);

        int32_t T = next<int32_t>();
        for(int32_t t=1; t<=T; t++){
                solve_case();
        }

        return 0;
}
