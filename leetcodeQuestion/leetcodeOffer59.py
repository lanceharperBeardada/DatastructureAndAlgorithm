class Solution:
    def maxSlidingWindow(self, nums: List[int], k: int) -> List[int]:
        if(nums==[]):
            return []
        max_list=[]
        for i in range(0, len(nums)-k+1):
            temp_max=nums[i]
            for j in range(i, i+k):
                if(temp_max<nums[j]):
                    temp_max=nums[j]
            max_list.append(temp_max)
        return max_list