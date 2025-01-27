package lcode;
public class evendigits {
  public static void main(String[] args){
    int[] arr = {56,78,56};
    System.out.println(findNumbers(arr));
  } 
  static int findNumbers(int[] nums){
    int count = 0;
    int cnt = 0;
    for(int i=0;i<nums.length;i++){
      int digit = nums[i];
      while(digit!=0){
        cnt++;
        digit/=10;
      }
      if(cnt%2==0){
        count++;
      }
      cnt = 0;
    }
    return count;
  }
}
