#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void backFun(int n,int left,int right, vector <string> &result, string str){
      if(right>left||left>n||right>n){
        return;
      }
      if(right==left&&left==n){
        result.push_back(str);
        return;
      }
      if(left>=right){
        backFun(n, left + 1, right, result, str+"(");
        backFun(n, left, right + 1, result, str+")");
    }
    }
    vector<string> generateParenthesis(int n) {
      vector<string> result;
      string str = "";
      backFun(n, 0, 0, result,str);
      return result;
    }
};