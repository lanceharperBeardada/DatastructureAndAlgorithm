/*
 * @Author: your name
 * @Date: 2021-04-12 08:51:13
 * @LastEditTime: 2021-04-12 09:23:16
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \content\shellSort\ShellSort1.java
 */

package shellSort;

public class ShellSort1 {
  public static void shellSort(int[] list) {
    int n = list.length;
    int h = 1;
    while (h < n / 3) {
      h = h * 3 + 1;
    }
    while (h > 0) {
      for (int i = h; i < n; i++) {
        int j = i;
        int temp = list[j];
        if (list[j] < list[j - h]){
          for (; j >= h && temp < list[j - h]; j -= h) {
            list[j] = list[j - h];
          }
        list[j] = temp;
        }
      }
      h /= 3;
    }
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