#include <bits/stdc++.h>
using namespace std;
bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(i%3==0&&j%3==0){
                    int arr[10]={0};
                    for(int k=i;k<i+3;k++){
                        for(int l=j;l<j+3;l++){
                            if(board[k][l]=='.') continue;
                            arr[board[k][l]-'0']++;
                            if(arr[board[k][l]-'0']>1) return false;
                        }
                    }
                }
                int arr[10]={0};
                for(int k=i;k<9;k++){
                    if(board[k][j]=='.') continue;
                    arr[board[k][j]-'0']++;
                    if(arr[board[k][j]-'0']>1) return false;
                }
                for(int t=0;t<10;t++){
                    arr[t]=0;
                }
                for(int l=j;l<9;l++){
                    if(board[i][l]=='.') continue;
                    arr[board[i][l]-'0']++;
                    if(arr[board[i][l]-'0']>1) return false;
                }
            }
        }
        return true;
    }