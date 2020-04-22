class Node:
    def __init__(self, item):
        self.item = item
        self.next = None


class LinkList:
    def __init__(self):
        self._head = None

    # 敲重点：
    # 这里用的是头插法
    # 每一次先让head占据node的next的空间，实际上head是一个空的，
    # 但head是存在地址的变量，相当于占位符。
    # head=node是让head成为传入的节点，那么下一个传入节点的next指向
    # 的就是当前节点了（node.next=self._head）。
    def add(self, node_value):
        node = Node(node_value)
        node.next = self._head
        self._head = node

    # 遍历输出的方法很好理解，由于使用的是头插法，
    # 每次新节点都会插入到最前面，
    # 即输出时必然新节点先输出
    # 只需要判断当前节点的是否为空，就可以让判断节点的值是否需要输出，
    # 如果为空就停止输出
    def travel(self):
        _ = self._head
        while _ is not None:
            print(_.item)
            _ = _.next

    def is_empty(self):
        return True if self._head is None else False

    def get_size(self):
        _ = self._head
        count = 0
        while _ is not None:
            count+=1
            _=_.next
        return count


if __name__ == '__main__':
    link = LinkList()
    link.add(1)
    link.add(2)
    link.add(3)
    link.travel()
    print(link.is_empty())
    print(link.get_size())
