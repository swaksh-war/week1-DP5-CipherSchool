#include<bits/stdc++.h>
using namespace std;

void helper(string& resultSoFar, vector<string>& result, int open, int close){
    if(open > close || open < 0 || close < 0)
        return;
    if (open == 0 && close == 0){
        result.push_back(resultSoFar);
        return;
    }
    else{
        resultSoFar.push_back('(');
        helper(resultSoFar, result, open-1, close);
        resultSoFar.pop_back();
        resultSoFar.push_back(')');
        helper(resultSoFar, result, open, close-1);
        resultSoFar.pop_back();
    }
        
}

vector<string> generateParenthesis(int n) {
    vector<string> result;
    int start = n, end = n;
    string resultSoFar = "";
    helper(resultSoFar, result, start, end);
    return result;
}

int main(){
    
}