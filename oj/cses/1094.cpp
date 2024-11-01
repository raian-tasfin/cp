/*
 * @oj    : CSES Problem set
 * @id    : 1094
 * @title : Increasing Array
 * @status: WRONG ANSWER
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
    int cntElems; cin>> cntElems;
    vector<int> arr(cntElems);
    for(auto &it: arr) {
	cin>> it;
    }
    int sum = 0;
    for(int indx=1; indx < cntElems; indx++) {
	if(arr[indx] < arr[indx-1]) {
	    sum += arr[indx-1] - arr[indx];
	}
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
