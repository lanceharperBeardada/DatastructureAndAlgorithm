class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {

        if(nums.empty()){
            return 0;
        }

        int left = 0;
        int sum=0;
        int min_i=INT_MAX;
        for(int r=0;r<nums.size();r++){

            sum+=nums[r];

            while(target<=sum){
                sum-=nums[left];
                min_i=min(min_i, r-left+1);
                left++;
            }
        }
        return min_i==INT_MAX?0:min_i;
    }
};