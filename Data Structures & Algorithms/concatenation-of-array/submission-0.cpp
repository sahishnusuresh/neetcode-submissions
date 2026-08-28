class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        queue<int> a;
        vector<int> result;
        for(int i=0;i<nums.size();i++){
            a.push(nums[i]);
        }
        result = nums;
        for(int j=0;j<nums.size();j++){
            result.push_back(a.front());
            a.pop();
        }
        return result;
    }
};