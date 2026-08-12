class Solution {
public:

    int maxScore(vector<int>& cardPoints, int k) {
        int lsum=0;
        int rsum=0;
        for(int i=0;i<k;i++){
            lsum=lsum+cardPoints[i];
        }
        int maxscore=lsum;
        int right=cardPoints.size()-1;
        
        for(int i=k-1;i>=0;i--){
            lsum=lsum-cardPoints[i];
            rsum=rsum+cardPoints[right];
            right=right-1;
            maxscore=max(maxscore,lsum+rsum);
        }
        return maxscore;
    }
};