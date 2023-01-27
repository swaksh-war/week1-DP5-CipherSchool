#include <bits/stdc++>
using namespace std;
vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> vec;
        int n = nums.size();
        for (int i=0; i<n-1;i++){
            if(nums[i] > 0)
                return vec;
            if (i>0 && nums[i] == nums[i-1])
                continue;
            int target = 0 - nums[i];
            int l = i+1;
            int r = n-1;
            while (l<r){
                if(nums[l] + nums[r] == target){
                    vector<int> temp = {nums[l], nums[r], nums[i]};
                    vec.push_back(temp);
                    l++;
                    while (l<r && nums[l] == nums[l-1])
                        l++;
                }
                else if(nums[l] + nums[r] > target)
                    r--;
                else
                    l++;
        }
    }
    return vec;
}

int main(){
    return 0;
}