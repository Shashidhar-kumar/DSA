class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int>st;
        vector<int>vec(temperatures.size(),0);
        int n=temperatures.size();
        vec[n-1]=0;
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && temperatures[st.top()]<=temperatures[i]){
                st.pop();
            }
            if(!st.empty()) vec[i]=st.top()-i;
            st.push(i);
        }
        return vec;
    }
};