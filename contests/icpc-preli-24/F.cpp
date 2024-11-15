#include <bits/stdc++.h>
using namespace std;

#define newline   '\n'
#define begend(x) (x).begin(), (x).end()
#define int       int64_t
#define debug(x)  cout<< ">>> " << #x << ": " << x << newline;


void solve_case()
{
    int a, b, c;
    cin>> a >> b >> c;
    int p = a + b + c;
    int quot = (p-2*a) * (p-2*b) * (p-2*c);
    int deno = 4*p;

    int g = gcd(quot, deno);
    quot /= g;
    deno /= g;

    cout<< quot <<"/" << deno << newline;


    return;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int cntCases; cin>> cntCases;
    for(int caseNo = 1; caseNo <= cntCases; caseNo++) {
    	// cout<< "Case " << caseNo << ": ";
        solve_case();
    }

    return 0;
}
