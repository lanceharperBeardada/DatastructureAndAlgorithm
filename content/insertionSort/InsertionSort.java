
/*
 * @Author: beardada
 * @Date: 2021-04-07 09:30:14
 * @LastEditTime: 2021-04-07 17:11:08
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \content\insertionSort\InsertionSort.java
 */
package insertionSort;

public class InsertionSort {
  public static void sort(int[] list) {
    for (int i = 1; i < list.length; i++) {
      int temp = list[i];
      for (int j = i - 1; j > 0 && list[j] < temp; j--) {
        list[j + 1] = list[j];
      }
      list[j + 1] = temp;
    }
  }

  // TODO: main 函数未写完全
  public static void main(String[] args) {

  }
}
