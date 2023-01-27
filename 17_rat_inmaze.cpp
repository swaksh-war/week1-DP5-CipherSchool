#include <bits/stdc++.h>
using namespace std;
int xMoves[] = {0,0,1,-1};
int yMoves[] = {-1,1,0,0};

bool isSafe(vector<vector<int>>& mat, vector<vector<bool>>&visited, int x, int y, const int &R, const int &C){
    return ((x >= 0 && x < R && y >= 0 && y < C) && !visited[x][y] && mat[x][y]);
}

bool ratInMaze(vector<vector<int>> &mat, vector<vector<bool>>& visited, int x, int y, const int &R, const int &C){
    if(x == R-1 && y == C-1 && mat[R-1][C-1] == 1){
        visited[x][y] = true;
        return true;
    }
    if (isSafe(mat, visited, x, y, R, C)){
        visited[x][y] = true;
        for(int i=0; i<4; i++){
            int nextX = x + xMoves[i];
            int nextY = y + yMoves[i];
            if(ratInMaze(mat, visited, nextX, nextY, R, C)){
                return true;
            }
        }
        visited[x][y] = false;
    }
    return false;
}

int main(){
    return 0;
}