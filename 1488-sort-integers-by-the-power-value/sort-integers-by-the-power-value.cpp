class Solution {
public:
int powerofint(int x){
    if(x==1) return 0;
    int even=0;
    if(x%2==0){
        even=1+powerofint(x/2);
    }
    int odd=0;
    if(x%2!=0){
        odd=1+powerofint(3*x+1);
    }
    return even+odd;
}
    int getKth(int lo, int hi, int k) {
        vector<pair<int,int>> vec;
        for(int i=lo;i<=hi;i++){
            int steps=powerofint(i);
            vec.push_back({steps,i});
        }
        sort(vec.begin(),vec.end());
        return vec[k-1].second;
    }
};