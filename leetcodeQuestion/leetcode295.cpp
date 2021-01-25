/*
中位数是有序列表中间的数。如果列表长度是偶数，中位数则是中间两个数的平均值。

例如，

[2,3,4] 的中位数是 3

[2,3] 的中位数是 (2 + 3) / 2 = 2.5

设计一个支持以下两种操作的数据结构：

void addNum(int num) - 从数据流中添加一个整数到数据结构中。
double findMedian() - 返回目前所有元素的中位数。
*/

/*思想二：用最大堆最小堆实现，分别存储一般数据，维持最大堆堆顶比最小堆堆顶小
分析最小堆里的数据均比最大堆里面数据大，且堆顶正好可以推出中间值。
总数据流为偶数，则两个堆一样大，中位数就是取平均两个堆顶。
总数据流为奇数，则两个堆谁大一个，中位数就是这个堆堆顶。
维护思路：保证两个堆的size最多差一，保证最大堆堆顶小于最小堆堆顶
情况1，两个堆size一样，新元素<最大堆堆顶，压入最大堆，否则压入最小堆
情况2，最大堆比最小堆多一个元素
a，新元素>最大堆堆顶，直接压入最小堆维持平衡
b，新元素<最大堆堆顶，此时复杂，将最大堆堆顶push到最小堆，再pop最大堆，最后压入新元素到最大堆
情况3，最大堆比最小堆少一个元素
a，新元素<最小堆堆顶，直接压入最大堆
b，新元素>最小堆堆顶，最小堆堆顶push到最大堆，然后pop最小堆，最后压入新元素到最小堆
返回值就是size相同，堆顶加和/2，否则谁size大，返回谁堆顶
复杂度：找中位数o1，加元素logN
*/

#include<iostream>
#include<queue>
#include<vector>
using namespace std;

class MedianFinder {
  public:
    /** initialize your data structure here. */
    MedianFinder() {
        
    }
    
    void addNum(int num) {

      if (smallHeap.size() == bigHeap.size())
      {
        if(bigHeap.empty()||num<bigHeap.top()){
            bigHeap.push(num);
        }else{
          smallHeap.push(num);
        }
      }
      else if (smallHeap.size() < bigHeap.size())
      {
        if(num<bigHeap.top()){
          smallHeap.push(bigHeap.top());
          bigHeap.pop();
          bigHeap.push(num);
            
          
        }else{
            smallHeap.push(num);
        }
      }
      else
      {
        if(num<smallHeap.top()){
          bigHeap.push(num);
        }else{
          bigHeap.push(smallHeap.top());
          smallHeap.pop();
          smallHeap.push(num);
        }
      }
    }
    
    double findMedian() {
      if(smallHeap.size()==bigHeap.size())
        return float(smallHeap.top() + bigHeap.top()) / 2;
      else if(smallHeap.size()>bigHeap.size())
        return smallHeap.top();
      else 
        return bigHeap.top();
    }
    private:
        std::priority_queue<double, std::vector<double>, std::greater<double>> smallHeap;
        std::priority_queue<double> bigHeap;
};
