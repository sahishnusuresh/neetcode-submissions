class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        map<vector<int>,vector<string>> stringmap;
        for(string s: strs){
            vector<int> freq(26,0);

            for(char c: s){
                freq[int(c) - 'a']++;
            }
            stringmap[freq].push_back(s);
        }
        for (auto& [key, group] : stringmap) {
            result.push_back(group);
        }
        return result;
    }
};
