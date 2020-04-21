def fun(i):
    eum=1
    for i in range(1,i+1):
        eum*=i
    return eum
num=int(input())
sum=0
for i in range(1,num+1):
    sum+=fun(i)
print(sum)