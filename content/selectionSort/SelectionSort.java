package content.selectionSort;

public class SelectionSort{
  public static void selectSort(int[] list) {
    for (int i = 0; i < list.length; i++) {
      int min_index = i;
      for (int j = i; j < list.length; j++) {
        if (list[j] < list[min_index]) {
          min_index = j;
        }
      }
      swap(list, i, min_index);
    }
  }
  
  public static void swap(int[] list, int i, int j) {
    int temp = list[i];
    list[i] = list[j];
    list[j] = temp;
  }

  public static void main(String[] args) {
    int[] list = { 1, 4, 2, 3, 5, 9, 7 };
    selectSort(list);
    for (int i : list) {
      System.out.println(i);
    }
  }
}