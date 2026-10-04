class Solution {
public:
bool validstring(string &st,int count,int index,vector<vector<int>>&dp){
    if(index==st.size()) return count==0;
    if(count<0){
        return false;
    }
    if(dp[count][index]!=-1) return dp[count][index];
    bool forward=false;
    if(st[index]=='('){
        return dp[count][index]=validstring(st,count+1,index+1,dp);
    }
    if(st[index]==')'){
        return dp[count][index]=validstring(st,count-1,index+1,dp);
    }
    bool open = validstring(st, count + 1, index + 1,dp);
    bool close = validstring(st, count - 1, index + 1,dp);
    bool empty = validstring(st, count, index + 1,dp);

    return dp[count][index]=open || close || empty;
}
    bool checkValidString(string s) {
        vector<vector<int>>dp(s.size()+1,vector<int>(s.size(),-1));
        return validstring(s,0,0,dp);
    }
};