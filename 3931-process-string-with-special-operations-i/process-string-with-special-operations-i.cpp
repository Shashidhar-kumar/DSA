class Solution {
public:
    string processStr(string s) {
        if(s.size()==0) return "";
        string result="";
        int i=0;
        while(i<s.size()){
            if(s[i]!='#' && s[i]!='*' && s[i]!='%'){
                result=result+s[i];
            }
            if(s[i]=='*'){
                if(result.size()>0){
                result.pop_back();
                }
            }
            if(s[i]=='#'){
                result=result+result;
            }
            if(s[i]=='%'){
                reverse(result.begin(),result.end());
            }
            i++;
        }
        return result;
    }
};