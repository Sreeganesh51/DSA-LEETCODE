class Solution {
public:
    string minWindow(string s, string t) {

        int m = s.size();
        int n = t.size();

        if (t.empty() || m < n)
            return "";

        unordered_map<char, int> needed, window;

        for (char c : t)
            needed[c]++;

        int have = 0;
        int left = 0;
        int start = 0;
        int min_length = INT_MAX;
        int required = needed.size();

        for (int right = 0; right < m; right++) {
            window[s[right]]++;

            if (needed.count(s[right]) && window[s[right]] == needed[s[right]])
                have++;

            while (have == required) {
                int length = right - left + 1;

                if (length < min_length) {
                    min_length = length;
                    start = left;
                }

                window[s[left]]--;

                if (needed.count(s[left]) && window[s[left]] < needed[s[left]])
                    have--;
                left++;
            }
        }

        return min_length == INT_MAX ? "" : s.substr(start, min_length);
    }
};