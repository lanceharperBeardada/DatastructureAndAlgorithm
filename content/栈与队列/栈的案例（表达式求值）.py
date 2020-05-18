class Stack:
    def __init__(self):
        self.item = []

    def push(self, item):
        self.item.append(item)
        print(self.item)

    def pop(self):
        self.item.pop()

    def get_stack_head(self):
        return self.item.pop()


if __name__ == '__main__':
    opc_stack = Stack()
    opn_stack = Stack()
    expression = input()
    expression = list(expression)
    for i in range(len(expression)):
        if expression[i] in "*/":
            expression.insert((i + 2), ")")
    for i in expression:
        if i == ')':
            n = opn_stack.get_stack_head()
            o = opc_stack.get_stack_head()
            if o == '+':
                n = n + opn_stack.get_stack_head()
                opn_stack.push(n)
            elif o == '-':
                n = opn_stack.get_stack_head() - n
                opn_stack.push(n)
            elif o == '*':
                n = n * opn_stack.get_stack_head()
                opn_stack.push(n)
            elif o == '/':
                n = opn_stack.get_stack_head() / n
                opn_stack.push(n)

        elif i in '+-*/':
            opc_stack.push(i)
        elif i in '0123456789':
            opn_stack.push(int(i))

    for i in range(len(opc_stack.item)):
        n = opn_stack.get_stack_head()
        o = opc_stack.get_stack_head()
        if o == '+':
            n = n + opn_stack.get_stack_head()

        elif o == '-':
            n = opn_stack.get_stack_head() - n

        elif o == '*':
            n = n * opn_stack.get_stack_head()

        elif o == '/':
            n = opn_stack.get_stack_head() / n
        opn_stack.push(n)
    num = opn_stack.get_stack_head()
    print(num)
