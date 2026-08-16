class Solution {
public:
void Ntobinary(vector<int>&vec,int n){
    while(n!=0){
        int digit=n%2;
        n=n/2;
        vec.push_back(digit);
    }
}
    int hammingWeight(int n) {
        vector<int>vec;
        Ntobinary(vec,n);
        int cnt=0;
        for(int i=0;i<vec.size();i++){
            if(vec[i]==1) cnt++;
        }
        return cnt;
    }
};