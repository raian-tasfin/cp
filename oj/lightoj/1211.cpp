#include <bits/stdc++.h>
using namespace std;

const char newline = '\n';
#define int long long

vector<int> final_cube;
int get_volume(){
        int ans=1;
        for(int i=0; i<3; i++){
                ans *= final_cube[i+3] - final_cube[i];
        }
        return ans;
}

int32_t main(){
        int T, t=1, n, input_cube[6];
        cin>> T;

        while(T--){
                final_cube = {0,0,0,1001,1001,1001};
                cin>> n;
                while(n--){
                        for(int i=0; i<6; i++){
                                cin>> input_cube[i];
                        }
                        for(int i=0; i<3; i++){
                                final_cube[i] = max(final_cube[i], input_cube[i]);
                                final_cube[i+3] = min(final_cube[i+3], input_cube[i+3]);
                        }
                }
                cout<< "Case " << (t++) <<": " << max(0LL,get_volume()) << newline;
        }


        return 0;
}
