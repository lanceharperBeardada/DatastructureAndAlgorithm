n=eval(input())
number=input() 
list_num=[]
for i in number:
    list_num.append(i)
new_list=list_num[::-1]
cout=0

while(cout<30):
    y=0
    for i in range(len(list_num)-1,-1):
        #print(dict(zip(list_num, new_list)))
        k=int(list_num[i])+int(new_list[i])
        sum_list = [0 for i in range(len(list_num)+1)]
        m=k%n
        if k>=n:
            sum_list[i+1]=k//n
        sum_list[i]+=m
        # if sum_list[i]>=n:
        #     sum_list[i+1]=sum_list[i]//n
        #     sum_list[i]%=n  
        if sum_list[0]=0
    if sum_list==sum_list[::-1]:
        print("STEP={}".format(cout+1))
        print(sum_list)
        exit()
    print(sum_list)
    list_num=sum_list
    new_list=list_num[::-1]
    cout+=1
print("Impossible!")

    
