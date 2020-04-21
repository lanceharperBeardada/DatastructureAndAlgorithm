'''
def binary_search(number,list):
    low = 0
    high = len(list)-1
    mid = (low+high)//2
    goal=False
    while(goal!=True):
        if(list[mid]==number):
            goal=True
            return mid
        elif list[mid]<number:
            high=mid-1
        elif list[mid]>number:
            low=mid+1
        elif low==high:
            return None
    
list=[2,4,6,7,8,10,12,15,17]
number=3
print(binary_search(number,list))
'''
#然而上述代码只能针对已排序的数组，即在binary_search中多加了一个比较大小的步骤，
# 此时尝试去除该步骤，让binary_search对未排序数组也能生效

def binary_search(number,list,low,high):
    mid=(low+high)//2
    goal=False
    while(low<high):
        if(list[mid]==number):
            goal=True
            return mid
        else:
            binary_search(number,list,mid+1,high)
            binary_search(number,list,low,mid-1)
        return None 
list=[1,4,3,2,6,9,5]
number=3
print(binary_search(number,list,0,len(list)-1))


        
