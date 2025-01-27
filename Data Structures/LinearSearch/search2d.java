public class search2d {
  public static void main(String[] args){
    int arr[][] = {
      {1,2,4,5},
      {7,4,2,8},
      {5,2,24,5}
  };
  System.out.println(minimum2d(arr));
  }
  static int minimum2d(int[][] arr){
    int minimum = arr[0][0];
    for(int row=0;row<arr.length;row++){
      for(int element=0;element<arr[row].length;element++){
        if(arr[row][element] < minimum){
          minimum = arr[row][element];
        }
      }
    }
    return minimum;
  }
}
