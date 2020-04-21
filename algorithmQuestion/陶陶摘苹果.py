tree_high=intput()
strlist_tree_high=tree_high.split()
intlist_tree_high=map(int,strlist_tree_high)
taotao=int(input())
count=0
for n in intlist_tree_high:
    n<taotao+30
    count+=1
print(count)