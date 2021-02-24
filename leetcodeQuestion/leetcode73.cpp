/* 给定一个 m x n 的矩阵，如果一个元素为 0，则将其所在行和列的所有元素都设为 0。请使用原地算法。

示例 1:

输入: 
[
  [1,1,1],
  [1,0,1],
  [1,1,1]
]
输出: 
[
  [1,0,1],
  [0,0,0],
  [1,0,1]
] */

#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
      for (int i = 0;i<matrix.size();i++){
        for (int j = 0; j < matrix[0].size();j++){
          if(matrix[i][j]==0){
            matrix[i][j] = 8912;
            for (int x = 0; x < matrix[0].size(); x++)
            {
              if(matrix[i][x]==0){
                continue;
              }
              else
                matrix[i][x] = 8912;
            }
            for (int y = 0; y < matrix.size();y++){
              if(matrix[y][j]==0){
                continue;
              }else
                matrix[y][j] = 8912;
            }
          }
        }
      }
      for (int i = 0;i<matrix.size();i++){
        for (int j = 0; j < matrix[0].size();j++){
          if(matrix[i][j]==8912){
            matrix[i][j] = 0;
          }
        }
      }
    }
};