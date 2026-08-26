class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        vector<vector<char>>vec;
        for(int i=0;i<s.size();i++){
            vector<char>ans;
            int len=0;
            for(int j=i;j<s.size();j++){
                ans.push_back(s[j]);
                if(s[j]=='1'){
                    len++;
                    if(len==k){
                        vec.push_back(ans);
                        break;
                    }
                }
            }
        }
        vector<char>ans2;
        int mini=INT_MAX;
        for(auto it:vec){
            mini=min(mini,(int)it.size());
        }
        for(auto it:vec){
            if(it.size()==mini){
                if(ans2.empty() || it<ans2){
                    ans2=it;
                }
            }
        }
        string result="";
        for(auto it:ans2){
            result=result+it;
        }
        return result;
    }
};