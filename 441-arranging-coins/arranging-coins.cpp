class Solution {
public:
    int arrangeCoins(int n) {
        int ans=n;
        int i=1;
        while(ans>=i){
            ans=ans-i;
            i++;
        }
        return i-1;
    }
};