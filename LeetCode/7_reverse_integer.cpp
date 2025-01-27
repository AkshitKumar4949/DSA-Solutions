class Solution {
public:
    int reverse(int x) {
        double temp = x;
        int count = 0;
        long long reversedNumber=0;
        while(x!=0){
            x = x/10;
            count++;
        }
        x = temp;
        for(int i=0;i<count;i++){
            reversedNumber = reversedNumber*10 + x%10;
            x=x/10;
        }
        if(reversedNumber>2147483647||reversedNumber<-2147483648){
            reversedNumber=0;
        }
        return static_cast<int>(reversedNumber);
    }
};