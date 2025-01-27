public class max {
  public static void main(String[] args){
    int[] arr={1,2,3,4,5,7,8};
    boolean isSorted = Sorted(arr);
    if(isSorted){
      System.out.println("Yes sorted array");
    }
    else{
      System.out.println("not an sorted array");
    }
  }
  public static boolean Sorted(int[] arr){
    boolean isSorted = true;
    for(int i=0;i<arr.length-1;i++){
      if(arr[i]>arr[i+1]){
        isSorted = false;
      }
    }
    return isSorted;
  }
}