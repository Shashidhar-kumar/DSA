class Solution {
public:
int gcd(int a, int b) {
    while (b != 0) {
        int rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}
    long long gcdSum(vector<int>& nums) {
        vector<int>prefix;
        int i=0;
        int maxi=INT_MIN;
        while(i<nums.size()){
            maxi=max(nums[i],maxi);
            int GCD=gcd(nums[i],maxi);
            prefix.push_back(GCD);
            i++;
        }
        sort(prefix.begin(),prefix.end());
        int smallest=0;
        int largest=prefix.size()-1;
        long long sum=0;
        while(smallest<largest){
            sum=sum+gcd(prefix[smallest],prefix[largest]);
            smallest++;
            largest--;
        }
        return sum;
    }
};