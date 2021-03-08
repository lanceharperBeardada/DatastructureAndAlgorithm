#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    string minWindow(string s, string t) {
      vector<bool> flag(128, false);
      vector<int> chars(128, 0);
      for(auto &i:t){
        chars[i]++;
        flag[i] = true;
      }
      int min_l = 0;
      int l = 0;
      int cnt = 0;
      int minSize = s.size() + 1;
      for (int r = 0; r < s.size();r++){
        if(--chars[s[r]]>=0){
          cnt++;
        }

        while(cnt==t.size()){
          if(r-l+1<minSize){
            min_l = l;
            minSize = r - l + 1;
          }
          if(flag[s[l]]&&++chars[s[l]]>0){
            cnt--;
          }
          l++;
        }
      }
      return minSize>s.size() ? "" : s.substr(min_l, minSize);
    }
};