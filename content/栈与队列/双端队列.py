class Deque:
    def __init__(self):
        self.items = []

    # 从头部开始插入
    def add_front(self, item):
        self.items.insert(0, item)

    # 从尾部开始插入
    def add_rear(self, item):
        self.items.pop(item)

    # 从头部开始移出数据
    def remove_front(self):
        return self.items.pop(0)

    # 从尾部开始移出数据
    def remove_rear(self):
        return self.items.pop()

    # 获取队列的长度
    def get_size(self):
        return len(self.items)
