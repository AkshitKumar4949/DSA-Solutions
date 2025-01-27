public class linearsearch{
  public static void main(String[] args){
    int[] arr = {1,7,8,-89,6,69,85,23};
    int num = searchinrange(arr, 6, 1, 4);
    if(num==-1){
      System.out.println("target not found between ");
    }
    else{
      System.out.println("target at " + num);
    }
  }
  static int LS(int[] arr, int target){
    if(arr.length==0){
      return -1;
    }
    for(int i=0;i<arr.length;i++){
      int element = arr[i];
      if(element == target){
        return i;
      }
    }
    return -1;
  }
  static int searchinrange(int[] arr,int target, int start, int end){
    for(int i=start;i<=end;i++){
      if(arr[i]==target){
        return i;
      }
    }
    return -1;
  }
}