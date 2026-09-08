class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> result(temperatures.size());
        stack<int> st;  // stores indices

        for (int i = 0; i < temperatures.size(); i++) {

            // Current temperature is warmer than temperatures
            // at indices stored on the stack
            while (!st.empty() && 
                   temperatures[i] > temperatures[st.top()]) {

                int prevDay = st.top();
                st.pop();

                result[prevDay] = i - prevDay;
            }

            // Current day is waiting for a warmer future day
            st.push(i);
        }

        return result;
    }
};
