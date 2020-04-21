def selectionSort(a,n):
    for i in range(0,n):
        minj=i
        for j in range(i,n):
            if a[minj]>a[j]:
                minj=j
        temp=a[i]
        a[i]=a[minj]
        a[minj]=temp
n=int(input())
num=input()
num=num.split()
i=0
while i<n:
    num[i]=int(num[i])
    i+=1
selectionSort(num,n)
for i in num:
    print(i,end=" ")
