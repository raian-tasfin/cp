#include <bits/stdc++.h>
using namespace std;

#define newline   '\n'
#define begend(x) (x).begin(), (x).end()
#define int       uint64_t
#define debug(x)  cout<< ">>> " << #x << ": " << x << newline;

const int MOD = 998244353;

int power(int base, uint64_t pow)
{
    if (pow == 0) {
        return 1;
    }
    int res = power(base, pow / 2) % MOD;
    res = (res * res) % MOD;

    if(pow % 2 == 0) {
	return res;
    }
    res = (base * res) % MOD;
    return res;
}

int mod_inverse(int num)
{
    int g = gcd(num, MOD);
    if (g != 1) {
	return -1;
    }
    else {
	return power(num, MOD - 2);
    }
}


void reduce(int& quot, int& deno) {
    int g = gcd(quot, deno);
    quot /= g;
    deno /= g;
}


void solve_case()
{
    int cntApples; cin>> cntApples;

    int sum = 0;
    for(int indx=0; indx < cntApples*2; indx++) {
	int var; cin>> var;
	sum = ((sum % MOD) + (var % MOD)) % MOD;
    }
    int denoPerm = mod_inverse(cntApples * 2);
    sum = sum % MOD;

    vector<int> ans;
    for(int k=1; k <= cntApples; k++) {
	int quot = (k * sum) % MOD;
	int deno = denoPerm;
	reduce(quot, deno);
	int res = (quot * deno) % MOD;
	ans.push_back(res);
    }
    cout<< ans[0];
    for(int indx=1; indx < ans.size(); indx++) {
	cout<< " " << ans[indx];
    }
    cout<< newline;


    return;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve_case();

    return 0;
}
