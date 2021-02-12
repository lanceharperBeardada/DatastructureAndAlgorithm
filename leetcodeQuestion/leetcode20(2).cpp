#include<iostream>
#include<map>
#include<stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
      map<char, char> bracketsMap;
      stack<char> bracketsRightStack;
      bracketsMap.insert(std::pair<char, char>('(', ')'));
      bracketsMap.insert(std::pair<char, char>('[',']'));
      bracketsMap.insert(std::pair<char, char>('{', '}'));
      for(char i:s){
        map<char, char>::iterator iter = bracketsMap.find(i);
        if(iter!=bracketsMap.end()){
          bracketsRightStack.push(iter->second);
        }
        else if(!bracketsRightStack.empty()&&bracketsRightStack.top()==i){
            bracketsRightStack.pop();
        }else
          return false;
      }
      if(bracketsRightStack.empty()){
        return true;
      }else
        return false;
    }
};