class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int maximum = 0;
        unordered_set nums_set(nums.begin(),nums.end());
        for(int num : nums){
            if(nums_set.find(num-1) != nums_set.end()){
                continue; // there is a smaller number
            }
            int current=num;
            int length =1;
            while(nums_set.find(current+1) != nums_set.end()){
                current = current + 1;
                length++;
            }
        
            maximum = std::max(length,maximum);
        }
        return maximum;
    }
};
