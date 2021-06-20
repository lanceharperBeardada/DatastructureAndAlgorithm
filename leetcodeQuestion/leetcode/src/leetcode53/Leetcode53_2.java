public class Leetcode53_2 {
  public int maxSubArray(int[] nums) {
    
    return getMax(nums, 0, nums.length-1);
  }

  public int getMax(int[] nums, int l, int r){
    if(l==r){
      return nums[l];
    }
    
    int mid=(l+r)/2;
    int leftMax = getMax(nums, l, mid);
    int rightMax = getMax(nums,mid+1, r);
    int crossMax = getCrossMax(nums, l, r, mid);
    return Math.max(crossMax, Math.max(leftMax, rightMax));
  }

  public int getCrossMax(int[] nums, int l, int r, int mid){
    int leftMax = nums[mid];
    int rightMax = nums[mid+1];
    for(int i=mid-1; i>=0;i--){
      
      leftMax = Math.max(leftMax, nums[i]+leftMax);
    }

    for(int i=mid+2; i<=r;i++){
      rightMax = Math.max(rightMax, nums[i]+rightMax);
    }

    return rightMax+leftMax;
  }

  public static void main(String[] args) {
    Leetcode53_2 demo = new Leetcode53_2();
    int[] nums = {-2,1,-3,4,-1,2,1,-5,4};
    System.out.println(demo.maxSubArray(nums));
  }
}

