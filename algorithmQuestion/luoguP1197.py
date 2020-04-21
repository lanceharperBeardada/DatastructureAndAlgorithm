#对末位数字进行判断，不为0输出-1
#5的个数乘以5是9的倍数
import os
lenth=int(input())
list=[]
zero=0
five=0
list_1=input().split()
i=0
for i in list_1[0:lenth-1]:
    list.append(i)
for i in list:
    if i=='0':
        zero+=1
    if i=='5':
        five+=1
if five<9:
    if zero!=0:
        print(0)
    else:
        print(-1)
    os._exit(0)
if zero==0:
    print(-1)
    os._exit(0)
if five>=9 and zero>=1:
    num=int(five//9)
    five=9*num
    while five>0:
        print("5",end='')
        five-=1
    while zero>0:
        print("0",end='')
        zero-=1







    
