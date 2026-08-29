class Solution {
public:
    int subtractProductAndSum(int n) {
        int product=n;
        int sum=n;
        int prod=1;
        int add=0;
        int sum2=n;
        while(n!=0){
            int digit=n%10;
            n=n/10;
            prod=prod*digit;
        }
        while(sum2!=0){
            int dig=sum2%10;
            sum2=sum2/10;
            add=add+dig;
        }
        return prod-add;

    }
};