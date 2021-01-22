#include<queue>
#include<iostream>
using namespace std;
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
      priority_queue<int, vector<int>, greater<int>> small_heap;
      for(auto n: nums){  
        if(small_heap.size()<k){
          small_heap.push(n);
        }else if(n>small_heap.top()){
          small_heap.pop();
          small_heap.push(n);
        }
      }
      return small_heap.top();
    }
};