#新建一个空列表，存放十个数模42求余后的结果
num_list=[]
i=0
while i<10:
    num_list.append((int(input()))%42)
    i+=1
#再建一个新列表，用于计数
count_list=[]
for i in range(100):
    count_list.append(0)
#对num_list进行排序并计数
num_list.sort()
i=0
while i<=100:
    for m in num_list:
        if m==i:
            count_list[i]+=1
    i+=1
count=0
for i in count_list:
    if i!=0:
        count+=1
print(count)
