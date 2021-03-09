/* 给定一个数组，它的第 i 个元素是一支给定股票第 i 天的价格。

设计一个算法来计算你所能获取的最大利润。你可以尽可能地完成更多的交易（多次买卖一支股票）。

注意：你不能同时参与多笔交易（你必须在再次购买前出售掉之前的股票）。

 

示例 1:

输入: [7,1,5,3,6,4]
输出: 7
解释: 在第 2 天（股票价格 = 1）的时候买入，在第 3 天（股票价格 = 5）的时候卖出, 这笔交易所能获得利润 = 5-1 = 4 。
随后，在第 4 天（股票价格 = 3）的时候买入，在第 5 天（股票价格 = 6）的时候卖出, 这笔交易所能获得利润 = 6-3 = 3 。 
*/

#include<vector>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int dp0=0;
        int dp1=-prices[0];
        for(int i=0;i<prices.size();i++){
            dp0=max(dp0, dp1+prices[i]);
            dp1=max(dp1, dp0-prices[i]);
        }
        return dp0;
    }
};

/*
解题思路
本题在交易股票的过程中，一共会有 2 种状态：

dp0：手里没股票
dp1：手里有股票
初始化 2 种状态：

dp0 = 0
dp1 = - prices[0]
对 2 种状态进行状态转移：

dp0 = max(dp0, dp1 + prices[i])
前一天也是 dp0 状态，或者前一天是 dp1 状态，今天卖出一笔变成 dp0 状态
dp1 = max(dp1, dp0 - prices[i])
前一天也是 dp1 状态，或者前一天是 dp0 状态，今天买入一笔变成 dp1 状态
最后一定是手里没有股票赚的钱最多，因此返回的是 dp0
*/

