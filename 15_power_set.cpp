#include<bits/stdc++.h>
using namespace std;

void helper(vector<int>& nums, vector<int>& temp, vector<vector<int>>& res, int i){
    if (i >= nums.size()){
        res.push_back(temp);
        return;
    }
    temp.push_back(nums[i]);
    helper(nums, temp, res, i+1);
    temp.pop_back();
    helper(nums, temp, res, i+1);
}

vector<vector<int>> powerset(vector<int> nums){
    vector<vector<int>> result;
    vector<int> temp;
    int i = 0;
    helper(nums, temp, result, i);
    return result;
}

int main(){
    vector<int> nums = {2,3,4,5};
    vector<vector<int>> result = powerset(nums);
    for(auto i: result){
        for(auto j: i){
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}