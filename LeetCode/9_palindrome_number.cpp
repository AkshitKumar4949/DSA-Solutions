class Solution {
public:
    bool isPalindrome(int x) {
        int temp = x;
        int digits=0;
        double y=0;
        while(temp>0){
            temp = temp/10;
            digits++;
        }
        temp = x;
        for(int i=0;i<digits;i++){
            y = (temp%10) + y*10;
            temp = temp/10;
        }
        if(y==x){
            return true;
        }
        else{
            return false;
        }
    }
};