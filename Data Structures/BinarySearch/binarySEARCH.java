import java.util.*;
public class binarySEARCH  {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int[] array = new int[n];
        for(int i=0;i<n;i++){
            array[i] = input.nextInt();
        }
        for(int i=0;i<n;i++){
            System.out.println("Element arr[" + i + "] = " + array[i]);
        }
        System.out.println("Enter element to be searched");
        int target = input.nextInt();
        int result = binarySearch(array,target);
        if(result!=-1){
            System.out.println("Element "+target+" is at index "+result);
        }
        else{
            System.out.println("Element not present in the array");
        }
        input.close();
    }
    static int binarySearch(int[] array, int element){
        int start = 0;
        int end = array.length - 1;
        while(start<=end){
            int mid = start + (end-start)/2;
            if(element>array[mid]){
                start = mid + 1; 
            }
            else if(element<array[mid]){
                end = mid - 1;
            }
            else{
                return mid;
            }
        }
        return -1;
    }
}