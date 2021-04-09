/*
 * @Author: your beardada
 * @Date: 2021-04-09 08:27:31
 * @LastEditTime: 2021-04-09 08:45:28
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \content\shellSort\ShellSort.java
 */
package shellSort;

public class ShellSort {
  public static void shellSort(int[] list) {
    int n = 1;
    int h = list.length;
    while (n < h) {
      n = n * 3 + 1;
    }

    for (; n >= 1; n = n / 3) {
      for (int i = n; i < h; i++) {
        for (int j = i; j >= n; j -= n) {
          if (list[j] < list[j - n]) {
            swap(list, j, j - n);
          }
        }
      }
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
