/*
时间复杂度与最优步长序列有关，最优为O(nlog^2 n)，最差为O(n^2)
空间复杂度为 O(n)
*/

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void shellSort(vector<int> &array)
{
  int h = 1;
  while (h < array.size() / 3)
  {
    h = h * 3 + 1;
  }
  while (h >= 1)
  {
    for (int i = h; i < array.size(); i++)
    {
      for (int j = i; j >= h && array[j - h] > array[j]; j -= h)
      {
        swap(array[j - h], array[j]);
      }
    }
    h /= 3;
  }
}

int main()
{
  vector<int> a = {1, 3, 2, 4, 6, 7, 5, 9, 10, 8};
  shellSort(a);
  for (auto i : a)
  {
    cout << i << endl;
  }
  return 0;
}