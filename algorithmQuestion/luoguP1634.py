a,b=input().split()
x=int(a)
n=int(b)
count=num=1
while count<=n:
    num=num*x+num
    count+=1
print(num)