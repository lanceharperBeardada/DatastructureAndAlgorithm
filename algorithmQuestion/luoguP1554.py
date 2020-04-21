#用一个字典存放0到9
#输入两个数，将两个包括这两个数之间的数存到数组里。
#设计个函数，求每个数的长度，再将每个数转换成字符串，再依据每个字符串的字符找到对应的值。
def fun(i,key):
    num=len(i)
    count=0
    while count<num:
        key[i[count]]+=1
        count+=1
    return key
key = {'0': 0, '1': 0, '2': 0, '3': 0, '4': 0,'5': 0, '6': 0, '7': 0, '8': 0, '9': 0}
a,b=input().split()
for i in range(int(a),int(b)+1):
    key=fun(str(i),key)
for i in key.values():
    print(i,end=' ')
