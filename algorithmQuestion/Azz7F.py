def funb(i):
    fac=i
    while i>1:
        i-=1
        fac*=i
    return fac
a=int(input())
b=[]
i=0
while i < a:
    c=int(input())
    b.append(c)
    i+=1
for i in b:
    c=len(str(funb(i)))
    print(c)