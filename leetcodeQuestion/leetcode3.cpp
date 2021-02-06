/*
给定一个字符串，请你找出其中不含有重复字符的 最长子串 的长度。

 

示例 1:

输入: s = "abcabcbb"
输出: 3 
解释: 因为无重复字符的最长子串是 "abc"，所以其长度为 3。
*/


#include<iostream>
#include<algorithm>
#include<string.h>
#include<set>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      if(s.length()==0){
        return 0;
      }
      cout << s.length();
      int maxLength = 0;
      int j = 0;
      set<char> chars;
      for (int i=0; i < s.size();i++){
        if(chars.count(s[i])==0){
          chars.insert(s[i]);
          maxLength = max<int>(maxLength, chars.size());
        }
        else
        {
          while(chars.count(s[i])){
            chars.erase(s[j]);
            j++;
          }
          chars.insert(s[i]);
        }
      }
      return maxLength;
    }
};


    int main(){
      string s = "abcabcbb";
      Solution a;
      cout << a.lengthOfLongestSubstring(s) << endl;
      return 0;
    }