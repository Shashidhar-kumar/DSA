class Solution {
public:
    int maxVowels(string s, int k) {
        int l=0;
        int r=0;
        int maxLen=INT_MIN;
        int count=0;
        while(r<s.size()){
            if(s[r]=='a' || s[r]=='e' || s[r]=='i' || s[r]=='o' || s[r]=='u'){
                count++;
            }
            if(r-l+1==k){
                maxLen=max(maxLen,count);
                if(s[l] == 'a' || s[l] == 'e' ||
               s[l] == 'i' || s[l] == 'o' ||
               s[l] == 'u') {

                count--;
            }
            l++;
            }
            r++;
        }
        return maxLen;
    }
};