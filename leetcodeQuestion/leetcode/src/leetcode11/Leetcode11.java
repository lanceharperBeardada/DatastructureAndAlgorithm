class Solution {
  public int maxArea(int[] height) {
      int left = 0;
      
      int right = height.length-1;
      int len = height.length-1;
      int maximum = 0;
      while(left<right){
          int longEdge = Math.min(height[left],height[right]);
          maximum= Math.max(maximum, longEdge*len);
          if(longEdge==height[left]){
              left++;
          }else{
              right--;
          }
          len--;
      }
      return maximum;
  }
}