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
    # head=node是让head成为传入的节点，那么下一个传入的节点的next指向
    # 的就是当前节点了（node.next=self._head）。
    def add(self, node_value):
        node = Node(node_value)
        node.next = self._head
        self._head = node

    # 遍历输出的方法很好理解，
    # 如果使用的是头插法，
    # 每次新节点都会插入到最前面，
    # 即输出时必然新节点先输出；
    # 如果使用的是尾插法，每次新节点都插入到旧节点后面，
    # 尾插法的输出也将是旧节点先输出。
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
            count += 1
            _ = _.next
        return count

    # 尾插法：
    # 尾插法的思路是将每一个节点依次插入到头节点之后。
    # 让当前节点指向头节点，如果头节点是空的，令当前节点成为头节点。
    # 如果头节点不为空，则依次遍历之后的节点，
    # 让新节点成为最后一个节点的下一个指向的节点。
    # 必须要确保新节点是最后一个节点的下一个节点（node.next），否则链表就会断掉。
    # 这里使用了一个pre，它在遍历链表时，总是会成为当前遍历的节点，
    # 而当前节点（cur）总是会成为当前节点所指向的下一个节点。
    # 所以最后新节点应该是遍历后的当前节点（pre）下一个所指向的节点，
    # 而不是当前节点下一个节点所指向的下一个节点（cur.next，由于cur=cur.next,
    # 实际上cur就是当前节点的下一个节点)。
    def append(self, node_value):
        node = Node(node_value)
        if self._head is None:
            self._head = node
            return
        cur = self._head
        pre = None
        while cur is not None:
            pre = cur
            cur = cur.next
        pre.next = node

    def search(self, value):
        cur = self._head
        while cur is not None:
            if cur.item == value:
                return True
            else:
                cur = cur.next
        return False

    def insert(self, value, pos):
        cur = self._head
        pre = None
        count = 0
        node = Node(value)
        while count != pos and cur is not None:
            pre = cur
            cur = cur.next
            count += 1
        if cur is None:
            print("超出能够插入的范围了")
            return
        if pos == 0:
            node.next = cur
            self._head = node
            return
        else:
            pre.next = node
            node.next = cur

    def delete_node(self, pos):
        count = 0
        cur = self._head
        pre = None
        while pos != count:
            pre = cur
            cur = cur.next
            count += 1
        if pos == 0:
            self._head = cur.next
            return
        else:
            pre.next = cur.next
            cur = cur.next


if __name__ == '__main__':
    link = LinkList()
    link.add(1)
    link.add(2)
    link.add(3)
    link.append(4)
    link.append(5)
    link.travel()
    print(link.is_empty())
    print(link.get_size())
    print(link.search(20))
    link.insert(66, 0)
    link.insert(65, 1)
    link.travel()
    print("删除节点")
    link.delete_node(0)
    link.delete_node(2)
    link.travel()
