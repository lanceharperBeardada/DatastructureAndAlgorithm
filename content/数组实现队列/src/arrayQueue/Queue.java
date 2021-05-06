public class Queue {
  private int maxSize;
  private int rear;
  private int front;
  private int[] queue;

  public void createQueue() {
    maxSize = 11;
    queue = new int[maxSize];
    rear = -1;
    front = -1;

  }

  public boolean isEmpty() {
    return rear == front;
  }

  public boolean isFull() {
    return maxSize - 1 == rear;
  }

  public void addQueue(int element) {
    if (isFull()) {
      System.out.println("队列已满");
      return;
    }
    rear++;
    queue[rear] = element;

  }

  public int getQueue() {
    if (isEmpty()) {
      throw new RuntimeException("队列已空");
    }
    front++;
    return queue[front];
  }

  public void traverseQueue() {
    if (isEmpty()) {
      return;
    }
    for(int i=rear;i>front;i--){
      System.out.println(queue[i]);
    }
  }
}
