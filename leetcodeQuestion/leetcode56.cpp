#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
      if(intervals.size()==1){
        return intervals;
      }
      
      vector<vector<int>> merged;
      sort(intervals.begin(), intervals.end());
      // for (auto i : merged)
        merged.push_back(intervals[0]);
      int l;
      int r;
      
      for (int i = 1; i < intervals.size(); i++)
      {
        if(intervals[i][0]<=merged.back()[1]&&intervals[i][1]>=merged.back()[1]){
          l = merged.back()[0];
          r = intervals[i][1];
          // cout << "l " << l << "r "<< r << endl;
          merged.pop_back();
          merged.push_back({l, r});
        }
        else if(intervals[i][0]>merged.back()[1]){
          merged.push_back(intervals[i]);
        }
      }
      return merged;
    }
    
};

/* int main(){
  Solution s;
  
// [[1,3],[2,6],[8,10],[15,18]]
  vector<vector<int>> v = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
  for(auto i:s.merge(v)){
    for(auto j:i){
      cout << j << endl;
    }
  }
} */