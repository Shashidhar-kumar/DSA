class Solution {
public:
    int totalNumbers(vector<int>& digits) {
       unordered_set<int> uniqueEvens;
    int n = digits.size();

    // Pick 3 distinct indices for hundreds, tens, and units places
    for (int i = 0; i < n; ++i) {
        if (digits[i] == 0) continue; // Leading digit cannot be 0
        
        for (int j = 0; j < n; ++j) {
            if (j == i) continue;
            
            for (int k = 0; k < n; ++k) {
                if (k == i || k == j) continue;
                
                // Must end in an even number
                if (digits[k] % 2 == 0) {
                    int num = digits[i] * 100 + digits[j] * 10 + digits[k];
                    uniqueEvens.insert(num);
                }
            }
        }
    }

    return uniqueEvens.size(); 
    }
};