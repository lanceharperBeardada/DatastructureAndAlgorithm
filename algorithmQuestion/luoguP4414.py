#第一行三个数分别代表A，B，C
#A<B<C
a_=input().split()
a=[]
for i in a_:
    a.append(int(i))
dict1={"A":0,"B":0,"C":0}
a.sort()
dict1['A']=a[0]
dict1['B']=a[1]
dict1['C']=a[2]
shunxu=input()
i=0
while i<3:
    print(dict1[shunxu[i]],end=' ')
    i+=1
