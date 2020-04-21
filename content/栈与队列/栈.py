class Stack:
    def __init__(self):
        self.item = []

    def push(self, item):
        self.item.append(item)

    def pop(self):
        self.item.pop()

    def size(self):
        return len(self.item)

    def is_empty(self):
        return True if self.item == [] else False

    def clear_stack(self):
        self.item = []

    def get_head(self):
        return self.item[-1]

    def peek(self):
        return len(self.item) - 1


if __name__ == '__main__':
    stack = Stack()
    # 入栈
    stack.push(1)
    stack.push(2)
    stack.push(12)

    print("按照入栈顺序依次输出栈内数据：")
    for i in stack.item:
        print(i)

    print("栈顶部的数据为：{}".format(stack.get_head()))
    print("栈顶部的索引值：{}".format(stack.peek()))

    # 出栈
    stack.pop()
    for i in stack.item:
        print(i)

    print("栈是否为空：{}".format(stack.is_empty()))

    print("栈的大小：{}".format(stack.size()))

    # 清空栈
    stack.clear_stack()
    print("栈的大小：{}".format(stack.size()))
    print("栈是否为空：{}".format(stack.is_empty()))
