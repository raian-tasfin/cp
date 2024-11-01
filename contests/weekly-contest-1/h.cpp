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

const int maxPrime = 100000000000; // approx. sqrt(10^11)
vector<int> primeList;

bool isPrime(int num) {
        if(num < 2)
                return false;
        if(num==2)
                return true;
        int limit=sqrt(num)+3;
        for(int div=3; div<limit; div++)
                if(num%div==0)
                        return false;
        return true;
}
void makePrimeList() {
        for(int i=0; i<=maxPrime; i++)
                if(isPrime(i))
                        primeList.emplace_back(i);
}
void solve_case(){
        auto num = next<int>();
        auto mod = next<int>();
        int limit = sqrt(num) + 2;
        int ans = 1;
        for(int i=0; primeList[i] < num; i++) {
                int currentDiv = primeList[i];
                int power = 1;
                int div = 1;
                while(div) {
                        div = num/currentDiv;
                        power+=div;
                        currentDiv *= currentDiv;
                }
                ans *= power;
        }
        cout<< ans << newline;

        return;
}

int32_t main(){
        ios_base::sync_with_stdio(0);

        makePrimeList();

        int32_t T = next<int32_t>();
        for(int32_t t=1; t<=T; t++){
                solve_case();
        }

        return 0;
}
