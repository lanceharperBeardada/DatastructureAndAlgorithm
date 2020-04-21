def funP(b,d):
    i=b-1
    while(i<=b):
        if b%i==0 and d%i==0:
            return int(b/i),int(d/i)
        i-=1
a=input().split()
n=0
while n<3:
    for i in a:
        a[n]=int(i)
        n+=1
a.sort()
b,c,d=a
e,f=funP(b,d)
print(str(e)+'/'+str(f))
