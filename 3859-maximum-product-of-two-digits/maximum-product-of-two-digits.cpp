class Solution {
public:
    int maxProduct(int n) {
        vector<int>vec;
        while(n!=0){
            int digit=n%10;
            vec.push_back(digit);
            n=n/10;
        }
        int maxi=INT_MIN;
        for(int i=0;i<vec.size();i++){
            for(int j=i+1;j<vec.size();j++){
                maxi=max(maxi,vec[i]*vec[j]);
            }
        }
        return maxi;
    }
};