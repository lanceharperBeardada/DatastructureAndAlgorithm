/*
 * @Author: your name
 * @Date: 2021-04-21 20:05:25
 * @LastEditTime: 2021-04-21 20:14:38
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \content\priorityQueueDemo\NumCompare.java
 */
package priorityQueueDemo;

import java.util.Comparator;

public class NumCompare implements Comparator<Integer> {

  @Override
  public int compare(Integer o1, Integer o2) {
    // TODO Auto-generated method stub
    if (o1 > o2) {

      return -1;
    } else if (o1 <= o2) {
      return 1;
    }else{
      return 0;
    }
  }
}