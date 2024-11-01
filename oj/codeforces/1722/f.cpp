#include<bits/stdc++.h>
using namespace std;

#define newline '\n'
#define debug(x) cout<< ">>> " << #x << " " << x << newline;
#define begend(obj) (obj).begin(), (obj).end()
#define rev_begend(obj) (obj).rbegin(), (obj).rend()

#define int int64_t

template<typename T>
T next(){
        T tmp;
        cin>> tmp;
        return tmp;
}

template<typename T1, typename T2>
pair<T1, T2> next(){
        T1 t1 = next<T1>();
        T2 t2 = next<T2>();
        return {t1, t2};
}

#define repeat(n, it)                           \
        for(auto it=n-n; it < n; it++)

template<typename T>
bool pair_strict_between(T lhs, T mhs, T rhs){
        return lhs.first < mhs.first and mhs.first < rhs.first
                and lhs.second < mhs.second and mhs.second < rhs.second;
}

template<typename T>
bool strict_between(T lhs, T mhs, T rhs){
        return lhs < mhs and mhs < rhs;
}

const int board_dimension_limit = 50;
char board[board_dimension_limit+10][board_dimension_limit+10];
int max_row, max_col;

int cnt_stars(int row, int col){
        if(row == max_row
           or col == max_col
           or row == 0
           or col == 0
           or board[row][col] != '*')
                return 0;

        board[row][col] = '-';
        int ans = 1
                + cnt_stars(row, col+1)
                + cnt_stars(row, col-1)
                + cnt_stars(row+1, col)
                + cnt_stars(row-1, col);
        return ans;
}

void solve_case(){
        int num_row = next<int>();
        int num_col = next<int>();

        max_row = num_row + 1;
        max_col = num_col + 1;

        for(int row=0; row<=max_row; row++)
                for(int col=0; col<=max_col; col++)
                        board[row][col] = '.';

        for(int row=1; row<=num_row; row++)
                for(int col=1; col<=num_col; col++)
                        cin>> board[row][col];

        for(int row=1; row<=num_row; row++)
                for(int col=1; col<=num_col; col++) {
                        int star_cnt = cnt_stars(row, col);
                        if(star_cnt != 0 and star_cnt != 3){
                                cout<< "NO" << newline;
                                return;
                        }
                        if(star_cnt == 3){
                                int anchor_row = row;
                                int anchor_col = col;
                                if(board[anchor_row+1][col] == '-'
                                   and board[anchor_row+1][col-1] == '-'){
                                        anchor_col--;
                                }
                                anchor_row--;
                                anchor_col--;
                                for(int cnt=0; cnt<=3; cnt++){
                                        if(board[anchor_row][anchor_col+cnt] == '-'
                                           or board[anchor_row+cnt][anchor_col] == '-'){
                                                cout<< "NO" << newline;
                                                return;
                                        }
                                }
                                for(int cnt=1; cnt<=3; cnt++){
                                        if(board[anchor_row+cnt][anchor_col+3] == '-'
                                           or board[anchor_row+3][anchor_col+cnt] =='-'){
                                                cout<< "NO" << newline;
                                                return;
                                        }
                                }
                        }
                }
        cout<< "YES" << newline;
        return;
}

int32_t main(){
        ios_base::sync_with_stdio(0);

        int32_t T = next<int32_t>();
        for(int32_t t=1; t<=T; t++){
                solve_case();

        }

        return 0;
}
