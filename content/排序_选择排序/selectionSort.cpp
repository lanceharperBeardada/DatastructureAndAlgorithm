/*
选择排序
每次遍历时，选择最小的元素与数组开头的元素进行交换
时间复杂度为O(n^2)，交换次数为 n 
*/

#include<iostream>
#include<vector>
using namespace std;


void selectionSort(vector<int> &array){
  for (int j = 0; j < array.size();j++)
  {
    int min = j;
    for (int i = j; i < array.size();i++)
    {
      if (array[i] < array[min])
      {
        min = i;
      }
    }
    swap(array[min], array[j]);
  }
}

int main(){
  vector<int> a = {2, 1, 3, 4, 7, 8, 6, 5};
  
  selectionSort(a);
  for (auto i:a){
    cout << i<< endl;
  }
  return 0;
}