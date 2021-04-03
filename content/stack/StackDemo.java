package content.stack;

interface Stack {
  default int peek() {
    return 0;
  }
  
  default void push(int i) {

  }
  
  default void pop() {

  }
  
  default boolean isEmpty() {
    return true;
  }
  
  default int size() {
    return 0;
  }
}

public class StackDemo implements Stack {
  
  private static class Node {
    int value;
    Node next;
  }
  
  private Node first;
  private int N;

  @Override
  public void push(int node) {
    Node oldfirst = first;
    first = new Node();
    first.value = node;
    first.next = oldfirst;
    N++;
  }

  @Override
  public boolean isEmpty() {
    return first == null;
  }

  @Override
  public void pop() {
    first = first.next;
    N--;
  }
  
  @Override
  public int peek() {
    int item = first.value;
    return item;
  }

  @Override
  public int size() {
    return N;
  }

  public static void main(String[] args) {
    StackDemo stack = new StackDemo();
    stack.push(2);
    stack.push(1);
    stack.push(5);
    System.out.println(stack.peek());
    stack.pop();
    System.out.println(stack);
    System.out.println(stack.size());
  }
}
