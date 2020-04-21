class Queue:
    def __init__(self):
        self.item = []

    def enqueue(self, item):
        self.item.insert(0, item)

    def dequeue(self):
        self.item.pop()

    def get_head(self):
        return self.item[0]

    def clear_queue(self):
        self.item = []


if __name__ == '__main__':
    queue = Queue()
    queue.enqueue(1)
    queue.enqueue(2)
    queue.enqueue(3)
    print(queue.item)
    print(queue.get_head())

    queue.clear_queue()

    print(queue.item)
