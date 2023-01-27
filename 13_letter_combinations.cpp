#include<bits/stdc++.h>
using namespace std;

vector<string> dialpad = {"", "abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void helper(string& digits, string& resultSoFar, vector<string>& result, int start, int end){
    if(start>end){
        result.push_back(resultSoFar);
        return;
    }
    char pressed = digits[start];
    string buttonchars = digits[pressed-'0'];
    for(int i=0; i<buttonchars.size(); i++){
        resultSoFar.push_back(buttonchars[i]);
        helper(digits, resultSoFar, result, start+1, end);
        resultSoFar.pop_back();
    }
}


vector<string> allComb(string digits){
    vector<string> result;
    string resultSoFar = "";
    int start=0, end=digits.size();
    helper(digits,resultSoFar, result, start, end);
    return result;
}


int main(){
    string input = "2379";
    vector<string> arr = allComb(input);
    for (string i: arr)
        cout << i << " ";
}