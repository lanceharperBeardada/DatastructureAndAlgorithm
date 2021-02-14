/* 给你一个 m 行 n 列的矩阵 matrix ，请按照 顺时针螺旋顺序 ，返回矩阵中的所有元素。 */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution
{
public:
  vector<int> spiralOrder(vector<vector<int>> &matrix)
  {
    vector<int> result;
    int left = 0;
    int top = 0;
    int right = matrix[0].size() - 1;
    int bottom = matrix.size() - 1;
    string direction = "right";
    while (left <= right && top <= bottom)
    {
      if (direction == "right")
      {
        for (int i = left; i <= right; i++)
        {
          result.push_back(matrix[top][i]);
        }
        top++;
        direction = "down";
      }
      else if(direction=="down"){
        for (int i = top; i <= bottom;i++){
          result.push_back(matrix[i][right]);
        }
        right--;
        direction = "left";
      }
      else if(direction=="left"){
        for (int i = right; i >= left;i--){
          result.push_back(matrix[bottom][i]);
        }
        bottom--;
        direction = "up";
      }
      else if(direction=="up"){
        for (int i = bottom; i >= top;i--){
          result.push_back(matrix[i][left]);
        }
        left++;
        direction = "right";
      }
    }
    return result;
  }
};
