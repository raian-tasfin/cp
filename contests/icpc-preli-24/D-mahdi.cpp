#include<bits/stdc++.h>

using namespace std;
typedef uint64_t ll;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(x) cout<<#x<<' '<<'>'<<' '<<x<< endl;

ll mod = 998244353;

ll calculate(ll p,ll q){
    ll mod = 998244353, expo;
    expo = mod - 2;
    while (expo){
        if (expo & 1){
            p = (p * q) % mod;
        }
        q = (q * q) % mod;
        expo >>= 1;
    }
    return p;
}

void solve(){
    ll N;
    cin >> N;

    ll sum = 0;
    for(ll i=0; i<N*2; i++){
        ll x;
        cin >> x;
	x %= mod;
        sum = (sum % mod + x % mod) % mod;
    }
    for(int i=1; i<=N; i++){
        ll x = ((sum % mod) * (i % mod)) % mod;
        ll y = (2 * N) % mod;
        if(i==N){
            cout<<calculate(x,y)<<endl;
            return;
        }
        cout<<calculate(x,y)<<" ";
    }
}

signed main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    optimize();
    // ll t;
    // cin>>t;
    // for(ll i=1; i<=t; i++){
        solve();
    // }
    return 0;
}
