public class diagonalsum {
  public static void main(String[] args){
    int arr[][] = {{1,2,3},{4,5,6},{7,8,9}};
    int sum =0;
    int sum2=0;
    for(int i=0;i<arr.length;i++){
      for(int j=0;j<arr[i].length;j++){
        if(i==j){
          sum += arr[i][j];
        }
        if(i+j==2){
          sum2+=arr[i][j];
        }
      }
    }
    System.out.println("Sum of diagonal 1 is = "+sum);
    System.out.println("Sum of diagonal 2 is = "+sum2);
  }
}
