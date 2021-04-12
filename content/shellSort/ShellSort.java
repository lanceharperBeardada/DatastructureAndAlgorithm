/*
 * @Author: your beardada
 * @Date: 2021-04-09 08:27:31
 * @LastEditTime: 2021-04-12 08:26:16
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \content\shellSort\ShellSort.java
 */
package shellSort;

public class ShellSort {
  public static void shellSort(int[] list) {
    int n = list.length / 3;
    int h = 1;
    while (h < n) {
      h = h * 3 + 1;
    }
    while (h >= 1) {
      for (int i = h; i < list.length; i++) {
        for (int j = i; j >= h && list[j] < list[j - h]; j -= h) {
          swap(list, j, j - h);
        }
      }
      h /= 3;
    }
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
    int[] a = { 1, 4, 5, 6, 3, 2, 0, 9, 8, 7 };
    shellSort(a);
    print(a);
  }
}
