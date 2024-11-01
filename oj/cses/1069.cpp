/*
 * @oj    : CSES Problem set
 * @id    : 1069
 * @title : Repititions
 * @status: ACCEPTED
 */

#include <bits/stdc++.h>
using namespace std;

#define newline          '\n'
#define begend(x)        (x).begin(), (x).end()
#define int              int64_t
#define debug(x)         cout<< ">>> " << #x << ": " << x << newline;
#define max_assign(x, y) x = max(x, y);

void solve_case()
{
    string str = "x";
    string inStr; cin>> inStr;
    str += inStr + "x";

    array<int, 50> maxFreq;
    maxFreq.fill(0);

    int currLen = 0;
    for(int indx = 1; indx < str.size(); indx++) {
	char curr = str[indx];
	char prev = str[indx-1];

	if(curr == prev) {
	    currLen++;
	    continue;
	}
	max_assign(maxFreq[prev - 'A'], currLen);
	currLen = 1;
    }

    cout<< (*max_element(begend(maxFreq))) << newline;

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
