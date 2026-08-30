class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> result;
        map<int,int> count;
        for(int i: nums){
            count[i]++; // mapping each elemnt to its count
        }
        vector<vector<int>> freq(nums.size()+1);
        for(auto& [key,element] : count){
            freq[element].push_back(key);
        }
        for(int i = freq.size()-1;i>=0;i--){
            for( int num : freq[i]){
                result.push_back(num);
                if(result.size()==k){
                    return result;
                }
            }
            
        }
        return result;
    }

};
