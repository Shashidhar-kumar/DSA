class Solution {
public:
bool predictthewin(int start,int end,vector<int>&nums,int turn,int player1,int player2){
    if(start>end){
        return player1>=player2;
    }
    if(turn){
        //player 1 chance
        bool takestart=predictthewin(start+1,end,nums,!turn,player1+nums[start],player2);
        bool takeend=predictthewin(start,end-1,nums,!turn,player1+nums[end],player2);
        return takestart||takeend;
    }
    else{
        bool takestart=predictthewin(start+1,end,nums,!turn,player1,player2+nums[start]);
        bool takeend=predictthewin(start,end-1,nums,!turn,player1,player2+nums[end]);
        return takestart && takeend;
    }
    

}
    bool predictTheWinner(vector<int>& nums) {
        int n=nums.size();
        bool predict=predictthewin(0,n-1,nums,1,0,0);
        return predict;
    }
};