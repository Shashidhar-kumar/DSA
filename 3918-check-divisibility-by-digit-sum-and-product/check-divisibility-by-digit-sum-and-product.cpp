class Solution {
public:
    bool checkDivisibility(int n) {
        int addsum=0;
        int product=n;
        int finn=n;
        while(n!=0){
            int digit=n%10;
            addsum=addsum+digit;
            n=n/10;
        }
        int prod=1;
        while(product!=0){
            int digit=product%10;
            prod=prod*digit;
            product=product/10;
        }
        int fin=addsum+prod;
        if(finn%fin==0) return true;
        return false;

    }
};