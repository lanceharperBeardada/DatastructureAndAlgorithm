/*
假设你是一位很棒的家长，想要给你的孩子们一些小饼干。但是，每个孩子最多只能给一块饼干。

对每个孩子 i，都有一个胃口值 g[i]，这是能让孩子们满足胃口的饼干的最小尺寸；并且每块饼干 j，都有一个尺寸 s[j] 。如果 s[j] >= g[i]，我们可以将这个饼干 j 分配给孩子 i ，这个孩子会得到满足。你的目标是尽可能满足越多数量的孩子，并输出这个最大数值。

 
示例 1:

输入: g = [1,2,3], s = [1,1]
输出: 1
解释: 
你有三个孩子和两块小饼干，3个孩子的胃口值分别是：1,2,3。
虽然你有两块小饼干，由于他们的尺寸都是1，你只能让胃口值是1的孩子满足。
所以你应该输出1。
*/

/* 贪心算法解决
让需求最小的一项对应体积最小的。
让 g 与 最小的 s 比较，
满足的话就换到下一个 g，同时 s 也要换，
不满足的时换另一个 s
*/
#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int gl=0;
        int sl=0;
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        while(gl<g.size()&&sl<s.size()){
            if(g[gl]<=s[sl]){
                gl++;
           }
            sl++;
        }
        return gl;
    }
};