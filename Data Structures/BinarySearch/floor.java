// Biggest number smaller or equal to target.
public class floor {
  public static void main(String[] args){
    int[] arr = {1,7,9,11,17,23,28,33,47};
    System.out.println(element(arr, 45, 0, arr.length-1));
  }
  static int element(int[] arr, int target, int start, int end){
    int mid  = (start + end) / 2;
    while(start<=end){
      if(arr[mid]>target){
        end = mid - 1;
        mid = (start + end) / 2;
      }
      else if(arr[mid] == target){
        return mid;
      }
      else{
        start = mid + 1;
        mid = (start + end) / 2;
      }
    }
    return arr[end];
  }
}
