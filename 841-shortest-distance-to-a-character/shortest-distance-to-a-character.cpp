class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int>occuringC;
        for(int i=0;i<s.size();i++){
            if(s[i]==c){
                occuringC.push_back(i);
            }
        }
        vector<int>answer;
        for(int i=0;i<s.size();i++){
            int mini=INT_MAX;
            for(auto it:occuringC){
            mini=min(abs(it-i),mini);
            }
            answer.push_back(mini);
        }
        return answer;
    }
};