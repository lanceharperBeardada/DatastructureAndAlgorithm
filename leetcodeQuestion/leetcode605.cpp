/* 假设有一个很长的花坛，一部分地块种植了花，另一部分却没有。可是，花不能种植在相邻的地块上，它们会争夺水源，两者都会死去。

给你一个整数数组  flowerbed 表示花坛，由若干 0 和 1 组成，其中 0 表示没种植花，1 表示种植了花。另有一个数 n ，能否在不打破种植规则的情况下种入 n 朵花？能则返回 true ，不能则返回 false。

 

示例 1：

输入：flowerbed = [1,0,0,0,1], n = 1
输出：true */

#include<vector>
using namespace std;
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int left=0;
        int right;
        flowerbed.push_back(0);
        for(int i=0;i<flowerbed.size()-1;i++){
            right=flowerbed[i+1];
            if(flowerbed[i]==0&&left==0&&right==0){
                n--;
                flowerbed[i]=1;
            }

            left=flowerbed[i];
            
        }
        if(n>0){
            return false;
        }else{
            return true;
        }
    }
};