# 烫手山芋
# 现在这里有个山芋，六个孩子围城一个圈，
# 山芋依次从第一个孩子手里向下一个孩子手里传递，
# 每传递七次一个孩子出局，直到剩下最后一个孩子，则这个孩子胜利
# 问：谁最后是赢家


class Queue:
    def __init__(self):
        self.item = []

    def enqueue(self, item):
        self.item.insert(0, item)

    def dequeue(self):
        self.item.pop()

    def get_head(self):
        return self.item.pop()

    def clear_queue(self):
        self.item = []


if __name__ == '__main__':

    queue = Queue()
    children_queue = [i for i in "ABCDEF"]
    for i in children_queue:
        queue.enqueue(i)
    cont = len(queue.item)
    while cont != 1:
        for i in range(1, 7 + 1):
            if i < 7:
                queue.enqueue(queue.get_head())
            elif i == 7:
                queue.dequeue()
        cont -= 1
        print(queue.item)
