class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int n=capacity.size();
        vector<int>difference(n);
        for(int i=0;i<n;i++){
            difference[i]=capacity[i]-rocks[i];
        }
        sort(difference.begin(),difference.end());
        for(int i=0;i<n;i++){
            if(additionalRocks>=difference[i]){
                additionalRocks-=difference[i];
                difference[i]=0;
            }
            else{
                break;
            }
        }
        int count=0;
        for(int i=0;i<n;i++){
            if(difference[i]==0) count++;
        }
        return count;
    }
};