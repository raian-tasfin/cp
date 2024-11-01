/*
 * @oj    : CSES Problem set
 * @id    : 1068
 * @title : Weird Algorithm
 * @status: ACCEPTED
 */

#include <bits/stdc++.h>
using namespace std;

#define newline   '\n'
#define begend(x) (x).begin(), (x).end()
#define int       int64_t
#define debug(x)  cout<< ">>> " << #x << ": " << x << newline;


void solve_case()
{
    int num; cin>> num;
    cout<< num;
    while(num != 1) {
	if(num % 2 == 0) {
	    num /= 2;
	} else {
	    num = 3 * num + 1;
	}
	cout<< " " << num;
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
