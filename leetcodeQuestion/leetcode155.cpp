#include<iostream>
#include<stack>
using namespace std;
class MinStack {
private:
    stack<int> stack_min;
    stack<int> stack_data;
public:
    /** initialize your data structure here. */
    MinStack() {

    }
    
    void push(int x) {
        stack_data.push(x);
        if(stack_min.empty()){
          stack_min.push(x);
        }else if(x<=stack_min.top()){
          stack_min.push(x);
        }else if(x>stack_min.top()){
          stack_min.push(stack_min.top());
        }
    }
    
    void pop() {
      stack_min.pop();
      stack_data.pop();
    }

    int top() {
      return stack_data.top();
    }

    int getMin() {
      return stack_min.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */