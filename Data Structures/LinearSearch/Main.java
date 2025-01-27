public class Main {
  public static void main(String[] args){
    String str = "Akshit";
    char target = 'a';
    boolean num = searchstring2(str, target);
    if(num==true){
      System.out.println("Character " + target + " exists");
    }
    else{
      System.out.println("Character " + target + " don't exists");
    }
  }
  static boolean searchstring2(String str, char target){
    if(str.length()==0){
      return false;
    }
    for(char ch:str.toCharArray()){
      if(ch == target){
        return true;
      }
    }
    return false;
  }
  static boolean searchstring(String str, char target){
    if(str.length()==0){
      return false;
    }
    for(int i=0;i<str.length();i++){
      if(target == str.charAt(i)){
        return true;
      }
    }
    return false;
  }
}
