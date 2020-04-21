'''
输入
2 10101
输出
1*2^4+1*2^2+1*2^0
'''
a,string=input().split()
length=len(string)-1
i=1
count=length
while(i<=length+1):
    if(int(string[i-1])!=0):
        print(string[i-1]+"*"+a+"^"+str(count),end='')
    if(i<=length and string[i]!='0'):
        print("+",end='')
    i+=1
    count-=1

