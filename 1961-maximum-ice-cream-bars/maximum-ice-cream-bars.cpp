class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int cost=0;
        int ice=0;
        for(int i=0;i<costs.size();i++){
            if(cost+costs[i]<=coins){
                cost=cost+costs[i];
                ice++;              
            }
        }
        return ice;
    }
};