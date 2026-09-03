class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i =0;
        int j = heights.size()-1;
        int maxArea = 0;
        int localArea = 0;
        while(i<j){
            localArea = std::min(heights[i],heights[j]) * (j-i);
            maxArea = std::max(maxArea,localArea);
            if(heights[i]<heights[j]){
                i++;
            }
            else if(heights[i]==heights[j]){
                j--;
            }
            else if(heights[i]>heights[j]){
                j--;
            }
        }
        return maxArea;
    }
};
