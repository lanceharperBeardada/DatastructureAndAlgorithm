#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  int findMinArrowShots(vector<vector<int>> &points)
  {
    if(points.empty()){
      return 0;
    }
    sort(points.begin(), points.end(), [](vector<int> a, vector<int> b) {
      return a[1] < b[1];
    });
    int ans = 1;
    int right = points[0][1];
    for (int i=1;i<points.size();i++)
    {  
      if(points[i][0]>right){
        ans++;
        right=points[i][1];
      }
    }
    return ans;
  }
};

int main()
{
  Solution a;
  vector<vector<int>> h({{10, 16}, {2, 8}, {1, 6}, {7, 12}});
  cout << a.findMinArrowShots(h) << endl;

  return 0;
}