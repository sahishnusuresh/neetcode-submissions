class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result(nums.size());
        vector<int> left_product(nums.size());
        int leftpro = 1;
        int rightpro = 1;
        vector<int> right_product(nums.size());
        for(int i=0;i<nums.size();i++){
            left_product[i]=leftpro;
            leftpro*=nums[i];
        }
        for(int i=nums.size()-1;i>=0;i--){
            right_product[i]=rightpro;
            rightpro*=nums[i];
        }
        for(int i=0;i<nums.size();i++){
            result[i]=left_product[i]*right_product[i];
        }
        return result;
            
    }
};
