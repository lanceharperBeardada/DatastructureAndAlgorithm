num=int(input())
lin_list=input().split()
i=0
a=[]
count=1
cou=[]
while i<num:
    a.append(int(lin_list[i]))
    i+=1
a.append(0)
if num==1:
    print(1)
else:
    i=0
    while i<num: 
        if  a[i+1]==a[i]+1:
            count+=1
        else:
            cou.append(max(count,0))
            count=1
        i+=1
    cou.sort()
    print(cou[-1])
        