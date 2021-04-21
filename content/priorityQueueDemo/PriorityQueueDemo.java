/*
 * @Author: your name
 * @Date: 2021-04-21 19:56:25
 * @LastEditTime: 2021-04-21 20:15:47
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \content\priorityQueueDemo\PriorityQueueDemo.java
 */
package priorityQueueDemo;

import java.util.Comparator;
import java.util.PriorityQueue;
import java.util.Queue;

public class PriorityQueueDemo {
  public static void main(String[] args) {
    Comparator<Integer> compare = new NumCompare();
    Queue<Integer> queue = new PriorityQueue(6, compare);
    queue.add(1);
    queue.add(6);
    queue.add(8);
    queue.add(9);
    queue.add(2);
    queue.add(7);
    System.out.println(queue.peek());
    queue.poll();
    System.out.println(queue.peek());
    queue.poll();
    System.out.println(queue.peek());
  }

}
