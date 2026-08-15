class Solution {
public:
int signFunc(int x){
    if(x>0) return 1;
    else if(x==0) return 0;
    else return -1;
}
    int arraySign(vector<int>& nums) {
        int product=1;
        int sign=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) return 0;
            if(nums[i]<0) sign=-sign;
        }
        return sign;
    }
};