import java.util.ArrayList;
import java.util.List;

public class Leetcode1313 {
  public static int[] decompressRLElist(int[] nums) {
    List<Integer> result = new ArrayList<Integer>();
    for(int i=0;i<nums.length;i+=2){
      for(int j=0;j<nums[i];j++){
        result.add(nums[i+1]);
      }
    }
    int[] list = new int[result.size()];

    for(int i=0;i<result.size();i++){
      list[i]=result.get(i);
    }

    return list;
  }

  public static void main(String[] args) {
    int[] i = {1,2,2,3};

    decompressRLElist(i);

  }
}
