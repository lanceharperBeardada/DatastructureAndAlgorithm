num=input()
length=len(num)-1
if(num[0]=='-' and num[length]!='0'):
    num[1:length-1].reverse()
    print(i for i in num[1:length])
elif(num[0]=='-' and num[length]=='0'):
    num[1:length-1].reverse()
    print(i for i in num[1:length-1])
elif(num[0]!='-' and num[length]!='0'):
    print(i for i in num.reverse())
elif(num[0]!='-' and num[length]=='0'):
    print(i for i in num[0:length-1].reverse())
