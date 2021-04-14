/*
 * @Author: your name
 * @Date: 2021-04-13 08:47:34
 * @LastEditTime: 2021-04-14 13:10:07
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \content\mergeSort\MergeSort.java
 */
package mergeSort;

public class MergeSort {
  private static int[] aux;

  public static void sort(int[] list) {
    aux = new int[list.length];
    mergeSort(list, 0, list.length - 1);
  }

  private static void merge(int[] list, int li, int hi, int mid) {
    for (int i = li; i <= hi; i++) {
      aux[i] = list[i];
    }
    int j = li;
    int k = mid + 1;
    for (int i = li; i <= hi; i++) {
      if (j > mid)
        list[i] = aux[k++];
      else if (k > hi) {
        list[i] = aux[j++];
      } else if (aux[k] < aux[j]) {
        list[i] = aux[k++];
      } else {
        list[i] = aux[j++];
      }
    }
  }

  private static void mergeSort(int[] list, int li, int hi) {
    int mid = (li + hi) / 2;
    if (hi <= li)
      return;
    mergeSort(list, li, mid);
    mergeSort(list, mid + 1, hi);
    merge(list, li, hi, mid);
  }

  public static void print(int[] list) {
    for (int i : list) {
      System.out.println(i);
    }
  }

  public static void main(String[] args) {
    int[] a = { 1, 4, 5, 6, 3, 2, 0, 9, 8, 7 };
    sort(a);
    print(a);
  }
}
