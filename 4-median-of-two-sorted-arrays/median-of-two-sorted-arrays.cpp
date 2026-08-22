class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>vec=nums1;
        for(int i=0;i<nums2.size();i++){
            vec.push_back(nums2[i]);
        }
        sort(vec.begin(),vec.end());
        int n=vec.size();
        if(vec.size()%2==0){
            double median=(vec[(n/2)-1]+vec[n/2])/2.0;
            return median;
        }
        double oddmedian=vec[n/2];
        return oddmedian;
    }
};