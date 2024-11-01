#include <bits/stdc++.h>
using namespace std;
#define newline '\n'

int main() {
        int n, t;
        cin>> n >> t;
        string line;
        cin>> line;
        for(int i=0; i<t; i++) {
                for(int j=0; j<=n-2; j++) {
                        if(line[j] == 'B' and line[j+1] == 'G') {
                                swap(line[j], line[j+1]);
                                j+=1;
                        }
                }
        }
        cout<< line << newline;

        return 0;
}
