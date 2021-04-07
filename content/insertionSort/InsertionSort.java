
/*
 * @Author: beardada
 * @Date: 2021-04-07 09:30:14
 * @LastEditTime: 2021-04-07 17:17:15
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \content\insertionSort\InsertionSort.java
 */
package insertionSort;

public class InsertionSort {
  public static void sort(int[] list) {
    for (int i = 1; i < list.length; i++) {
      int temp = list[i];
      int j;
      for (j = i - 1; j > 0 && list[j] > temp; j--) {
        list[j + 1] = list[j];
      }
      list[j + 1] = temp;
    }
  }

  public static void print(int[] list) {
    for (int i : list) {
      System.out.println(i);
    }
  }

  public static void main(String[] args) {
    int[] l = { 1, 4, 2, 3, 7, 6, 5 };
    sort(l);
    print(l);
  }
}
