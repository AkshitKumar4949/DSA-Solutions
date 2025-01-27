public class charSearch {
  public static void main(String[] args){
    char[] arr = {'a','c','f','y'};
    System.out.println(characterSearch(arr, 'w', 0, arr.length-1));
  }
  static char characterSearch(char[] arr, char target, int start, int end){
    int mid = start + (end - start)/2;
    while(start<=end){
      if(target>=arr[mid]){
        start = mid + 1;
        mid = start + (end-start)/2;
      }
      else{
        end = mid -1;
        mid = start+(end-start)/2;
      }
    }
    return arr[start % arr.length];
  }
}
