class Node:
    def __init__(self,item):
        self.item=item
        self.next=None

class Link_list:
    def __init__(self):
        self._head=None

    def add(self,node_value):
        node=Node(node_value)
        self.next=node
        self._head=node


if __name__ == '__main__':
    node=1
    link=Link_list()
    link.add
