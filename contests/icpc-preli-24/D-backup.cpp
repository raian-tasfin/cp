#include <bits/stdc++.h>
using namespace std;

#define newline   '\n'
#define begend(x) (x).begin(), (x).end()
#define int       int64_t
#define debug(x)  cout<< ">>> " << #x << ": " << x << newline;

const int MOD = 998244353;
const int M = 998244353;

int power(int base, uint64_t pow)
{
    if (pow == 0) {
        return -1;
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


void solve_case()
{
    int cntApples; cin>> cntApples;
    vector<int> redWeight(cntApples);
    vector<int> greenWeight(cntApples);

    int sum = 0;
    for(auto &it: redWeight) {
	cin>> it;
	sum += it;
    }
    for(auto &it: greenWeight) {
	cin>> it;
	sum += it;
    }
    set<int> results{848507703, 698771053, 549034403, 399297753,
	249561103, 99824453, 948332156, 798595506, 648858856, 499122206
    };

    map<int,int> mp = {
	{
	    {848507703,  1},
	    {698771053,  2},
	    {549034403,  3},
	    {399297753,  4},
	    {249561103,  5},
	    {99824453,   6},
	    {948332156,  7},
	    {798595506,  8},
	    {648858856,  9},
	    {499122206, 10}
	}
    };

    for(int num = 1; num <= 10000000; num++) {
	int deno = num;
	int quot = sum;
	int g = gcd(quot, deno);
	quot /= g;
	deno /= g;
	int res = (quot * mod_inverse(deno)) % MOD;
	if(results.find(res) != results.end()) {
	    // debug(quot);
	    debug(deno);
	    // debug(num);
	    // debug(sum);
	    // debug(g)
	    // debug(res);
	    debug(mp[res]);
	    // cout<< newline;
	}
    }



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
