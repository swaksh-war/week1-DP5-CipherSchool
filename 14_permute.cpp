#include<bits/stdc++.h>
using namespace std;

void helper(vector<int>& nums, vector<vector<int>>& res, vector<int>& temp, vector<bool>& visited){
    if(nums.size() == temp.size()){
        res.push_back(temp);
        return;
    }
    for(int i=0; i<nums.size(); i++){
        if(!visited[i]){
            visited[i] = true;
            temp.push_back(nums[i]);
            helper(nums, res, temp,visited);
            visited[i] = false;
            temp.pop_back();
        }
    }
}

vector<vector<int>> permute(vector<int> nums){
    vector<int> temp;
    vector<vector<int>> res;
    vector<bool> visited(nums.size(), false);
    helper(nums, res, temp, visited);
    return res;
}

int main(){
    vector<int> nums = {2,3,4};
    vector<vector<int>> result;
    result = permute(nums);
    for(auto i: result){
        for(auto j: i){
            cout << j << " "; 
        }
        cout << endl;
    }

    return 0;
}