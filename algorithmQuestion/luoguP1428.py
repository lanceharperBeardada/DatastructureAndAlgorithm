def fun(c,list_deepin):
    i=0
    count=0
    while i<c:
        if int(list_deepin[i])<int(list_deepin[c]):
            count+=1
        i+=1
    return count
num=int(input())
deepin=input()
list_deepin=deepin.split()
cout=1
print(0,end=' ')
while cout<num:
    print(fun(cout,list_deepin),end=' ')
    cout+=1