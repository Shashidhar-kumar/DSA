class Solution {
public:
    bool checkString(string s) {
        unordered_map<char,int>mpp;
        for(int i=0;i<s.size();i++){
            mpp[s[i]]++;
        }
        for(int i=0;i<s.size();i++){
            mpp[s[i]]--;
            if(s[i]=='b'){
                if(mpp['a']!=0){
                    return false;
                }
            }
        }
        return true;
    }
};