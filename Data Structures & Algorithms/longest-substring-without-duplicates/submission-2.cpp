class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> seen;
        int l = 0;
        int r = 0;
        int length = 0;
        int maxLength = 0;
        while(r < s.length()){
            while(seen.find(s[r])!=seen.end()){
                seen.erase(s[l]);
                l=l+1;
            }
            seen.insert(s[r]);
            
            length = r-l+1;
            
            maxLength = std::max(maxLength,length);
            r++;
        }
        return maxLength;
    }
};
