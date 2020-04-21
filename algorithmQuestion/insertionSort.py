def insertionSort(a,n):
    for i in range(1,n):
        v=a[i]
        j=i-1
        while a[j]>v and j>=0:
            a[j+1]=a[j]
            j-=1
        a[j+1]=v
n=int(input())
num=input()
a=num.split()
i=0
while i<n:
    a[i]=int(a[i])
    i+=1
insertionSort(a,n)
for i in a:
    print(i,end=" ")