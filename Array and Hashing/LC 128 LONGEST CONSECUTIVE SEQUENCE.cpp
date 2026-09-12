class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;

        for(int x : nums)
        st.insert(x);

        int max_length = 0;

        for(int x : st)
        {
            if(st.find(x-1) == st.end())
            {
                int current_length = 1;
                while(st.find(x+1)!=st.end())
                {
                    x++;
                    current_length++;
                }
                max_length = max(current_length , max_length);
            }
        
        }
      
      return max_length;
  

    }
};