class Solution {
public:
int integer(long long n,int count){
    if(n==1) return count;
    int even=INT_MAX;
    int take1=INT_MAX;
    int takem1=INT_MAX;
    if(n%2==0){
        even=integer(n/2,count+1);
    }
    else{
        take1=integer(n+1,count+1);
        takem1=integer(n-1,count+1);
    }
    return min(even,min(take1,takem1));
}
    int integerReplacement(int n) {
        int mininteger=integer((long long)n,0);
        return mininteger;
    }
};