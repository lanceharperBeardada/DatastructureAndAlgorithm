#include<string>
#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    string removeKdigits(string num, int k) {
        vector<int> n;
        string result;
        for (int i = 0; i < num.size();i++){
          int number = num[i] - '0';
          while (k&&n.size()>0 && n.back()>number){
            n.pop_back();
            k -= 1;
          }
          n.push_back(number);
        }

        while(k>0){
          n.pop_back();
          k--;
        }

        bool isLeadingZero = true;
        for (int i = 0; i < n.size(); i++)
        {
          if(isLeadingZero&&n[i]==0)
            continue;
          isLeadingZero = false;
          result += to_string(n[i]);
        }
        return result==""?"0":result;
    }
};