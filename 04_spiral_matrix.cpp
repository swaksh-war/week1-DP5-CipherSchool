#include<bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& vec){
    vector<int> ans;
    int start_row = 0, start_col = 0, end_row = vec.size(), end_col = vec[0].size();
    
    while(start_row < end_row && start_col < end_col){
        for(int i=start_col; i<end_col; i++){
            ans.push_back(matrix[start_row][i]);
        }
        start_row++;
        for(int i=start_row; i<end_row; i++){
            ans.push_back(matrix[i][end_col-1]);
        }
        end_col--;
        if (start_row>=end_row||start_col>=end_col)break;
        for(int i=end_col-1; i>=start_col; i--){
            ans.push_back(matrix[end_row-1][i]);
        }
        end_row--;
        for (int i=end_row-1; i>=start_row; i--){
            ans.push_back(matrix[i][start_col]);
        }
        start_col++;
    }
}

int main(){
    
}

