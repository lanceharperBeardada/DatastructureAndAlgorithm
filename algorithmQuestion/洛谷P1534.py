n=int(input())
count=0
unhappy=0
sum=0
while count<n:
    a,b=input().split()
    a=int(a)
    b=int(b)
    unhappy=unhappy+a+b-8
    sum+=unhappy
    count+=1
print(sum)
