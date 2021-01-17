#include<iostream>
#include<queue>
using namespace std;

class MyStack {
    
private:
    queue<int> queue_data;
    queue<int> queue_temp;
    
public:
    /** Initialize your data structure here. */
    MyStack() {

    }

    
    /** Push element x onto stack. */
    void push(int x) {
        queue_temp.push(x);
        while(!queue_data.empty()){
            queue_temp.push(queue_data.front());
            queue_data.pop();
        }
        while(!queue_temp.empty()){
            queue_data.push(queue_temp.front());
            queue_temp.pop();
        }
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        int n = queue_data.front();
        queue_data.pop();
        return n;
    }
    
    /** Get the top element. */
    int top() {
        return queue_data.front();
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        return queue_data.empty();
    }
};