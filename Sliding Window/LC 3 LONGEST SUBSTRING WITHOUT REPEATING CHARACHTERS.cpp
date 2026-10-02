class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int left = 0;
        int ans = 0;

        unordered_set<char> st;

        for (int right = 0; right < n; right++) {
            while (st.count(s[right]) != 0) {
                st.erase(s[left]);
                left++;
            }

            st.insert(s[right]);
            ans = max(ans, right - left + 1);
        }
        return ans;
    }
};