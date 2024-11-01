#include <iostream>
#include <vector>
#include <limits>
#include <algorithm>

#define begin_end(obj)                          \
        (obj).begin(), (obj).end()

#define newline '\n'

std::vector<long long> one_indices;
long long lim = 66000;

void setup_one_indices(){
        for(long long i=0; i<=lim; i++){
                long long res=(i*i+i)/2;
                one_indices.emplace_back(res-i+1);
        }
}
bool is_one_index(long long indx){
        return std::binary_search(begin_end(one_indices), indx);
}

int main(){
        setup_one_indices();
        int T;
        std::cin>> T;
        std::vector<char> output;
        while(T--){
                int n;
                std::cin>> n;
                output.emplace_back(is_one_index(n) ? '1' : '0');
                output.emplace_back(' ');
        }
        output[output.size()-1] = '\n';
        for(auto it:output){
                std::cout<< it;
        }

        return 0;
}
