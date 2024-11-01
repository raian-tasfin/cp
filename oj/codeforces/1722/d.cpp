#include<bits/stdc++.h>
using namespace std;

#define newline '\n'
#define debug(x) cout<< ">>> " << #x << " " << x << newline;

template<typename T>
T next(){
        T tmp;
        cin>> tmp;
        return tmp;
}

template<typename iterable_t>
void print_iterable(iterable_t &obj){
        cout<< obj[0];
        for(int i=1; i<obj.size(); i++)
                cout<< ' ' << obj[i];
        cout<< newline;
        return;
}

#define int int64_t

vector<int> k_sums;
string line;
int len;

int pos_value(int pos){
        if(line[pos] == 'L')
                return pos;
        return len - 1 - pos;
}

int toggle_value(int pos){
        return len - 1 - pos_value(pos);
}

void solve_case() {
        k_sums.clear();

        len = next<int>();
        line = next<string>();

        int total_sum = 0;
        for(int i=0; i<len; i++)
                total_sum += pos_value(i);
        for(int i=0; i<len; i++)
                k_sums.emplace_back(max(toggle_value(i) - pos_value(i), (int64_t)0));
        sort(k_sums.begin(), k_sums.end(), greater<int>());

        for(int i=0; i<len; i++){
                total_sum += k_sums[i];
                k_sums[i] = total_sum;
        }
        print_iterable<vector<int>>(k_sums);

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
