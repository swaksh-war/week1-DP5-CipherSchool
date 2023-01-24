#include<bits/stdc++.h>
using namespace std;

void sort_arr(vector<int>&arr){
    int n = arr.size();
    int p1 = 0, p0=0, p2=n-1;
    while(p1 <= p2){
        if(arr[p1] == 0){
            swap(arr[p0], arr[p1]);
            p0++;
            p1++;
        }
        if(arr[p1] == 2){
            swap(arr[p1], arr[p2]);
            p2--;
        }
        if(arr[p1] == 1){
            p1++;
        }
    }
}

int main(){
    vector<int> arr = {1,1,0,2,2,1,2,1};
    sort_arr(arr);
    for(int i: arr){
        cout << i << " ";
    }
}