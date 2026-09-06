class Solution {
public:
int intbreak(vector<int>&vec,int n,int index){
    if(index>=vec.size()) return 1; 

    int notake=intbreak(vec,n,index+1);
    int take=1;
    if(vec[index]<=n){
        take=vec[index]*intbreak(vec,n-vec[index],index);
    }
    return max(take,notake);
}
    int integerBreak(int n) {
        vector<int>vec;
        for(int i=1;i<n;i++){
            vec.push_back(i);
        }
        int maxiproduct=intbreak(vec,n,0);
        return maxiproduct;
    }
};