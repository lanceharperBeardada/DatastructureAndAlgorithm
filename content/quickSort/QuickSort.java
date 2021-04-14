/*
 * @Author: your name
 * @Date: 2021-04-14 13:58:18
 * @LastEditTime: 2021-04-14 14:45:25
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \content\quickSort\QuickSort.java
 */
package quickSort;

public class QuickSort {
  public static void quickSort(int[] list) {
    sort(list, 0, list.length - 1);
  }

  private static void sort(int[] list, int li, int hi) {
    if (li < hi) {
      int j = partition(list, li, hi);
      sort(list, li, j - 1);
      sort(list, j + 1, hi);
    }
  }

  private static int partition(int[] list, int li, int hi) {
    int i = li;
    int j = hi + 1;
    int p = li;
    while (true) {
      while (list[++i] < list[p])
        if (i == hi)
          break;
      while (list[--j] >= list[p])
        if (j == li)
          break;
      if (i >= j)
        break;
      swap(list, i, j);
    }
    swap(list, p, j);
    return j;
  }

  private static void swap(int[] list, int i, int j) {
    int temp = list[i];
    list[i] = list[j];
    list[j] = temp;
  }

  public static void print(int[] list) {
    for (int i : list) {
      System.out.println(i);
    }
  }

  public static void main(String[] args) {
    int[] list = { 2, 1, 3, 6, 7, 9, 8, 12, 10 };
    quickSort(list);
    print(list);
  }
}
