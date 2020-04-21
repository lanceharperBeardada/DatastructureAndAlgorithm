i=int(input())
a=0
list=[]
while a<i:
    num=int(input())
    if(num%2==0):
        list.append("even")
    else:
        list.append("odd")
    a+=1
for j in list:
    print(j)