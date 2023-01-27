//total ways to reach at corner starting from (0,0) to (m-1,n-1)
#include<bits/stdc++.h>
using namespace std;

int helper(int m, int n, int i, int j){
    if(i>=m || j>=n) return 0;
    if(i == m-1 && j == n-1) return 1;
    return helper(m,n,i+1,j) + helper(m,n,i,j+1);

}

int total_way (int m, int n){
    int res=0, i=0, j=0;
    res = helper(m,n,i,j);
    return res;
}

int main(){
    cout << total_way(3, 7) << endl;
    return 0;
}