#include<bits/stdc++.h>
using namespace std;
int trap(vector<int>& height) {
        int n = height.size();
        vector<int> lmax(n);
        vector<int> rmax(n);
        
        lmax[0] = height[0];
        rmax[n-1] = height[n-1];

        for(int i=1; i<n; i++){
            lmax[i] = max(height[i], lmax[i-1]);
            rmax[n-i-1] = max(height[n-i-1], rmax[n-i]);
        }

        int water=0;
        for(int i=0; i<n;i++){
            water += (min(lmax[i], rmax[i]) - height[i]);
        }
        return water;
    }

int main(){
    vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};
    cout << trap(height) << endl;
    return 0;
}