class Solution {
public:
    bool isPalindromic(string s) {
        string st="";
        for(int i=0;i<s.size();i++){
            int ascii=(int)s[i];
            st=st+bitset<8>(ascii).to_string();
        }
        
        int i=0;
        int j=st.size()-1;
        while(i<=j){
            if(st[i]!=st[j]) return false;
            i++;
            j--;
        }
        return true;
    }
};