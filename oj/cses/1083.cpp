/*
 * @oj    : CSES Problem set
 * @id    : 1083
 * @title : Missing Number
 * @status: ACCEPTED
 */

#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

#define newline   '\n'
#define begend(x) (x).begin(), (x).end()
#define int       int64_t
#define debug(x)  cout<< ">>> " << #x << ": " << x << newline;


void solve_case()
{
    int cntElems; cin>> cntElems;
    int sum = ((cntElems) * (cntElems + 1)) / 2;
    int var;
    cntElems--;
    while(cntElems--) {
	cin>> var;
	sum -= var;
    }
    cout<< sum << newline;

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
