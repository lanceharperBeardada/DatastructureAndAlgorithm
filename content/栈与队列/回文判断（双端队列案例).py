import sys

class Deque:
    def __init__(self):
        self.items = []

    def add_front(self, item):
        self.items.insert(0,item)

    def add_rear(self,item):
        self.items.pop(item)

    def remove_front(self):
        return self.items.pop(0)

    def remove_rear(self):
        return self.items.pop()

    def get_size(self):
        return len(self.items)


if __name__ == '__main__':
    deque=Deque()
    word=input()
    for i in word:
        deque.add_front(i)
    while deque.get_size()>1:
        if deque.remove_front() != deque.remove_rear():
            print("False")
            sys.exit(1)
    else:
        print("True")
