public class min {
  public static void main(String[] args){
    int[] arr = {89,7,5,4,9,89,14};
    System.out.println(minimum(arr));
  }
  static int minimum(int[] arr){
    int min = arr[0];
    for(int i=1;i<arr.length;i++){
      if(min>arr[i]){
        min = arr[i];
      }
    }
    return min;
  }
}
