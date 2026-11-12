class Solution {
public:
int substring(string &s, int index, int start) {
        if (index == (int)s.size()) return 0;
        for (int i = start; i < index; i++) {
            if (s[i] == s[index]) return 0;
        }
        return 1 + substring(s, index + 1, start);
    }
    int lengthOfLongestSubstring(string s) {
         int longest = 0;
        for (int start = 0; start < (int)s.size(); start++) {
            longest = max(longest, substring(s, start, start));
        }
        return longest;
    }
};