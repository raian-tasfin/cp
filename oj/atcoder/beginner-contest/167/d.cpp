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

int solve() {
        auto townCnt = next<int>();
        auto transportationCnt = next<int>() + 1;

        vector<int> transporter(1, 1);
        repeat(townCnt, i) {
                auto transporterInput = next<int>();
                transporter.emplace_back(transporterInput);
        }
        vector<bool> visited(townCnt+20, false);
        vector<int> path;
        vector<int> path_indx(townCnt+20, 0);
        int currentNode = 1;
        while(transportationCnt > 0 and (not visited[currentNode])) {
                visited[currentNode] = true;
                path.emplace_back(currentNode);
                path_indx[currentNode] = path.size() - 1;
                currentNode = transporter[currentNode];
                transportationCnt--;
        }
        transportationCnt--;
        if(transportationCnt == 0)
                return path.back();
        int cycleLen = path.size() - path_indx[currentNode];
        int indx = transportationCnt % cycleLen + path_indx[currentNode];
        return path[indx];
}


int32_t main(){
        ios_base::sync_with_stdio(0);

        cout<< solve() << newline;

        return 0;
}
