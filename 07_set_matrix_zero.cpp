#include<bits/stdc++.h>
using namespace std;

void setZeroes(vector<vector<int>>& matrix) {
        int columns = matrix[0].size();
        int rows = matrix.size();
        typedef std::pair<int, int> PAIRS;
        PAIRS index;
        std::vector<PAIRS> zeros;
        for (int i  = 0; i < rows; i++){
            for (int j = 0; j < columns; j++){
                if (matrix[i][j] == 0){
                    index.first = i;
                    index.second = j;
                    zeros.push_back(index);
                }
                    
            }
        }
        for (auto i : zeros){
            for (int j = 0; j < columns; j++){
                matrix[i.first][j] = 0;
            }
            for (int j = 0; j < rows; j++){
                matrix[j][i.second] = 0;
            }
        }
    }

int main() {
    return 0;
}