#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
    void expandSubString(int left, int right, int &start, string s, int &maxLength){
      while (left >= 0 && right <= s.length() && s[left] == s[right])
      {
        if(right-left+1>maxLength){
          maxLength = right - left + 1;
          start = left;
        }
        right++;
        left--;
      }
    }


    string longestPalindrome(string s) {
      if(s.length()<2)
        return s;
      int maxLength = 0;
      int right = 0;
      int left = 0;
      int start = 0;
      for (int i = 0; i < s.length(); i++,right++,left++){
        expandSubString(left, right + 1, start, s, maxLength);
        expandSubString(left - 1, right + 1, start, s, maxLength);
      }

      return s.substr(start, maxLength);
    }
};

int main(){
  string s = "abababc";
  Solution a;
  cout << a.longestPalindrome(s) << endl;
  return 0;
}