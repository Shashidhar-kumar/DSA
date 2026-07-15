class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumEven=0;
        int sumOdd=0;
        for(int i=0;i<=2*n;i++){
            if(i%2==0) sumEven=sumEven+i;
            else sumOdd=sumOdd+i;
        }
        int gcd=-1;
        for(int i=1;i<=sumEven;i++){
            if(sumEven%i==0 && sumOdd%i==0){
                gcd=i;
            }
        }
        return gcd;
    }
};