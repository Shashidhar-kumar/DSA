class Solution {
public:
    long long sumAndMultiply(int n) {
        string s1=to_string(n);
        string s2="";
        for(char ch: s1){
            if(ch!='0'){
                s2=s2+ch;
            }
        }
        if(s2.empty()){
            return 0;
        }
        long long x=stoll(s2);
        long long y=x;
        long long  sum=0;
        int j=0;
        while(x!=0){
            sum=sum+x%10;
            x=x/10;
        }
        return sum*y;

    }
};