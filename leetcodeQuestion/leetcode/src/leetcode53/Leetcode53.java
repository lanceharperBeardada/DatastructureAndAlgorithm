public class Leetcode53 {
  public int maxSubArray(int[] nums) {
    int _l = nums.length;
    int[] dp = new int[_l];
    dp[0] = nums[0];
    int maxSum = dp[0];
    for (int i = 1; i < _l; i++) {
      dp[i] = Math.max(nums[i], nums[i] + dp[i - 1]);
      maxSum = Math.max(maxSum, dp[i]);
    }

    return maxSum;
  }

  public static void main(String[] args) {
    Leetcode53 demo = new Leetcode53();
    int[] nums = { -2, 1, -3, 4, -1, 2, 1, -5, 4 };
    System.out.println(demo.maxSubArray(nums));
  }
}
