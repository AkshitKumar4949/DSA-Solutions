package lcode;
public class maxwealth {
  public static void main(String[] args){
    int[][] arr = {{1,2,3},{3,9,1}};
    System.out.println(maximumWealth(arr));
  }
  static int maximumWealth(int[][] accounts){
    int sum = 0;
    int temp = 0;
    for(int row=0;row<accounts.length;row++){
      for(int column=0;column<accounts[row].length;column++){
        sum += accounts[row][column];
      }
      temp = Math.max(sum, temp);
      sum = 0;
    }
    return temp;
  }
}
