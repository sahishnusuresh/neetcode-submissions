class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> characters(26,0);
        if( s.length() != t.length()){
            return false;
        }
        for (char c : s){
            characters[int(c) - 'a']++;
        }
        for( char c :t ){
            if(characters[int(c) - 'a'] == 0){
                return false;
            }
            else{
                characters[int(c) - 'a']--;
            }
        }
        return true;
    }
};
