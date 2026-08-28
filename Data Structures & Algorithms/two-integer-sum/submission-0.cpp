class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0; i < nums.size(); i++){
            int result = target - nums[i];
            
            // Fix 1: Start from i + 1 to avoid using the same element twice
            vector<int> slice(nums.begin() + i + 1, nums.end());
            
            auto it = find(slice.begin(), slice.end(), result);
            if(it != slice.end()){
                int slice_index = it - slice.begin();
                
                // Fix 2: Convert slice index back to original nums index
                int original_index = (i + 1) + slice_index; 
                
                return {i, original_index};
            }
        }
        return {}; // Return empty if no solution found
    }
};
