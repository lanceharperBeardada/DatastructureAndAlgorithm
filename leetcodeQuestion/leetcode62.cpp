/* 一个机器人位于一个 m x n 网格的左上角 （起始点在下图中标记为 “Start” ）。

机器人每次只能向下或者向右移动一步。机器人试图达到网格的右下角（在下图中标记为 “Finish” ）。

问总共有多少条不同的路径？ */

#include<iostream>
#include<vector>

class Solution {
public:
    int uniquePaths(int m, int n) {
      vector<vector<int>> array(m, vector<int>(n));
      for (int row = 0; row < m;row++){
        array[row][0] = 1;
      }

      for (int col = 0; col< n; col++)
      {
        array[0][col] = 1;
      }
      for (int row = 1; row < m;row++){
        for (int col = 1; col < n;col++){
          array[row][col] = array[row - 1][col] + array[row][col - 1];
        }
      }
      return array[m-1][n-1];
    }
};
