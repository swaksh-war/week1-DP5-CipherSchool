#include<bits/stdc++.h>
using namespace std;
#define _ INT_MAX

void merge_sort_array(vector<int>&a, int m, vector<int>&b, int n){
    int i = m - 1, j = n-1, k = m+n-1;
    while(i >= 0 && j >= 0){
        if(a[i] > b[j]){
            a[k] = a[i];
            i--;
        }
        else{
            a[k] = b[j];
            j--;
        }
        k--;
    }
    while(j>=0){
        a[k] = b[j];
        j--;
        k--;
    }
}

int main(){
    vector<int> b;
    vector<int> a;
    a = {1, 2, 4, 5, 7, _, _};
    b = {3,6};
    merge_sort_array(a, a.size(), b, b.size());
    for(auto i:a)
        cout << i << " ";
    cout << endl;
    return 0;
}