class Solution {
public:
int mintickets(vector<int>&days,vector<int>&costs,int index,vector<int>&dp){
    if(index>=days.size()) return 0;
    if(dp[index]!=-1) return dp[index];
    int i=index;

    int day1=costs[0]+mintickets(days,costs,index+1,dp);
    while(i<days.size() && days[i]<days[index]+7){
        i++;
    }
    int day7=costs[1]+mintickets(days,costs,i,dp);
    int j=index;
    while(j<days.size() && days[j]<days[index]+30){
        j++;
    }
    int day30=costs[2]+mintickets(days,costs,j,dp);
    return dp[index]=min(day1,min(day7,day30));

}
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        vector<int>dp(days.size()+1,-1);
        int mincost=mintickets(days,costs,0,dp);
        return mincost;
    }
};