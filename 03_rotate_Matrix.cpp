#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> rotateMatrix(vector<vector<int>>& vec){
    int n = vec.size();
    int m = vec[0].size();
    vector<vector<int>> ans(n, vector<int>(m, 0));
    for(int i=0; i < n; i++){
        for(int j=0; j<n; j++){
            result[i][j] = vec[j][i];
        }
    }
    return result;
}

int main(){
    vector<vector<int>> vec;
    cout << rotateMatrix(vec) << endl;
    return 0;
}