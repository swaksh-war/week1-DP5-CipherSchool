#include<bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        for(int i=0; i<m; i++){
            int j = 0;
            int end = matrix[0].size();
            int mid = (j + m)/2;
            while(j < m){
                if (target == mid{
                    return true;
                }
                if(target <  mid){
                    m = mid - 1;
                }
                if(target > mid){
                    j = mid + 1;
                }
            }
        }
        return false;
    }

int main() {
    return 0;
}