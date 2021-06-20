class Leetcode121 {
  public int maxProfit(int[] prices) {
      int min = prices[0];
      int max = 0;
      for(int i=1;i<len;i++){
          max = Math.max(max, prices[i]-min);
          min = Math.min(min, prices[i]);
      }
      return max;
  }
}