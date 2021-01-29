/*
给定一个只包括 '('，')'，'{'，'}'，'['，']' 的字符串 s ，判断字符串是否有效。

有效字符串需满足：

左括号必须用相同类型的右括号闭合。
左括号必须以正确的顺序闭合。
*/

/* 使用栈后进先出的特性，匹配右括号时弹栈，如果左右相搭配时，匹配成功，
注意栈为空的情况
*/

#include<iostream>
#include<string>
#include<stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
      stack<char> s_stack;
      if (s.length() == 0)
        return false;
      for (auto i : s)
      {
        if(i=='('||i=='['||i=='{'){
          s_stack.push(i);
        }else{
          if(s_stack.size()==0){
            return false;
          }
          else{
            char temp = s_stack.top();
            if(i==')'&&temp!='('){
              return false;
            }else if(i==']'&&temp!='['){
              return false;
            }else if(i=='}'&&temp!='{'){
              return false;
            }
            s_stack.pop();
          }
      }
    }
    if(s_stack.size()!=0)
      return false;
    return true;
    }
};
