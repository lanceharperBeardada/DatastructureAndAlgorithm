package quickSortDemo;
/*
 * @Author: your name
 * @Date: 2021-04-21 15:44:27
 * @LastEditTime: 2021-04-21 18:40:32
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \content\DemoQuickSort.java
 */

public class DemoQuickSort {
  public static void quickSort(int[] list, int li, int hi) {
    if (hi <= li)
      return;
    int j = prision(list, li, hi);
    quickSort(list, li, j - 1);
    quickSort(list, j + 1, hi);
  }

  public static int prision(int[] list, int li, int hi) {
    int i = li;
    int j = hi + 1;
    int temp = list[li];
    while (true) {
      while (list[++i] < temp)
        if (i == hi)
          break;
      while (list[--j] >= temp)
        if (j == li)
          break;
      if (i >= j)
        break;
      swap(list, i, j);
    }
    swap(list, li, j);
    return j;
  }

  public static void swap(int[] list, int i, int j) {
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
    int[] list = new int[100];
    for (int i = 0; i < 100; i++) {
      list[i] = (int) (Math.random() * 100);
    }
    print(list);
    quickSort(list, 0, list.length - 1);
    System.out.println("sorted: ");
    print(list);

  }
}
