def fun(a,b):
    if a>b:
        return a
    else:
        return b
a=int(input())
b=[]
i=0
c=input().split()
for f in c:
    b.append(int(f))
i=0
e=0
while i<a-1:
    d=fun(b[i],b[i+1])
    e+=d
    i+=1
print(e)
