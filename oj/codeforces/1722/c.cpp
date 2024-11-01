#include <bits/stdc++.h>
using namespace std;
#define newline '\n'
#define debug(x)  cout<<  ">>> "  << #x << " " << x << newline;

template<typename T>
T next(){
        T tmp;
        cin>> tmp;
        return tmp;
}

void print_word_state(pair<string, array<int, 3>> word){
        for(auto &person: word.second){
                cout<< " " << person;
        }
        cout<< newline;
}

void update_board(unordered_map<string, array<int,3>> &board,
                 string &word,
                 int person_id){
        auto word_entry = board.find(word);
        if(word_entry == board.end()){
                board[word].fill(0);
        }
        board[word][person_id] = 1;
        return;
}

void update_scores(array<int, 3> &writers, array<int,3> &scores){
        int writer_cnt = 0;
        for(auto &it: writers)
                writer_cnt += it;

        int word_score = 0;
        switch(writer_cnt){
        case 1: word_score = 3;
                break;
        case 2: word_score = 1;
                break;
        case 3: word_score = 0;
                break;
        }

        for(int person=0; person<3; person++){
                scores[person] += writers[person] * word_score;
        }

        return;
}

void solve_case(){
        static unordered_map<string, array<int,3>> board;
        board.clear();

        int word_cnt = next<int>();
        for(int person=0; person<3; person++){
                for(int i=0; i<word_cnt; i++){
                        string word = next<string>();
                        update_board(board, word, person);
                }
        }
        array<int, 3> scores;
        scores.fill(0);
        for(auto &word: board){
                update_scores(word.second, scores);
        }
        cout<< scores[0] << " " << scores[1] << " " << scores[2] << newline;
}

int main(){
        ios_base::sync_with_stdio(0);
        int T = next<int>();
        while(T--){
                solve_case();
        }

        return 0;
}
