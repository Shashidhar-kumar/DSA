class Solution {
public:
    int maxLength(vector<int>& nums) {
        int maxi=1;
         for(int i = 0; i < nums.size(); i++) {
        long long prod = 1;
        long long LCM = 1;
        long long GCD = 0;

        for(int j = i; j < nums.size(); j++) {
            if(prod > LLONG_MAX / nums[j]) {
                break;
            }
            prod *= nums[j];

            LCM = lcm(LCM, (long long)nums[j]);
            GCD = __gcd(GCD, (long long)nums[j]);
             if(LCM > LLONG_MAX / GCD) {
                break;
            }

            if(prod == LCM * GCD) {
                maxi = max(maxi, j - i + 1);
            }
        }
    }
        return maxi;
    }
};