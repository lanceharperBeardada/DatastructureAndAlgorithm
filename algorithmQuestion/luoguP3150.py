#如果x==y，z比x大，或z==x
#如果x<y，输出-1
#如果x>y,z==y
import os        
lenth=int(input())
x=input()
y=input()
z=[]
i=0
while i<len(x):
    if y[i]>x[i]:
        print(-1)
        os._exit(0)
    else:
        z.append(y[i])
    i+=1
for i in z:
    print(i,end='')

            
