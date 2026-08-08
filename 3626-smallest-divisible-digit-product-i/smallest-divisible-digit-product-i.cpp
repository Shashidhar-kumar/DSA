class Solution {
public:
int productdigit(int number){
    int product=1;
    
    while(number!=0){
        int num=number%10;
        product=product*num;
        number=number/10;
    }
    return product;
}
    int smallestNumber(int n, int t) {
        int x=n;
        while(productdigit(x)%t!=0){
            x++;
        }
        return x;
    }
};