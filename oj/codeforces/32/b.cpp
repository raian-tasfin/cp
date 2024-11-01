#include <bits/stdc++.h>
using namespace std;

int main() {
        string str;
        string res = "";
        cin>> str;
        for(int i=0; i<str.size(); i++){
                if(str[i] != '.' and str[i] != '-')
                        continue;
                if(str[i] == '.') {
                        res += '0';
                } else if(str[i+1] == '.') {
                        res += '1';
                        i++;
                } else {
                        res += '2';
                        i++;
                }
        }
        cout<< res << endl;

        return 0;
}
