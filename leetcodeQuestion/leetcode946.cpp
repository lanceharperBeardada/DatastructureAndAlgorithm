#include<iostream>
#include<vector>
#include<stack>
#include<queue>
using namespace std;
class Solution
{
private:
  stack<int> _stack;
  queue<int> _popped;

public:
  bool validateStackSequences(vector<int> &pushed, vector<int> &popped)
  {
    for(auto n:popped){
      _popped.push(n);
    }
    for(auto n:pushed){

        _stack.push(n);
        while (!(_stack.empty())&&_stack.top()==_popped.front()){
          _stack.pop();
          _popped.pop();
        }

    }
    if(_stack.empty()){
      return true;
    }else{
      return false;
    }
  }
};