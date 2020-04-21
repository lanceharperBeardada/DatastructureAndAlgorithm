num=input().split()
sum=0
count=0
for i in num:
    i=int(i)
    sum+=i
    count+=1
sum=sum*(2**(count-1))
print(sum)       
        