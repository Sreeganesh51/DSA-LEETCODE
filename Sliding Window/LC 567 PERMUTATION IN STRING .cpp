class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        // s1 cannot fit inside s2
        if (s1.size() > s2.size())
            return false;

        int freq1[26] = {0};
        int freq2[26] = {0};

        // Store frequencies of s1
        for (int i = 0; i < s1.size(); i++) {
            freq1[s1[i] - 'a']++;
        }

        // Store frequencies of the first window
        for (int i = 0; i < s1.size(); i++) {
            freq2[s2[i] - 'a']++;
        }

        int left = 0;
        int right = s1.size() - 1;

        while (true) {

            // Check whether current window is a permutation of s1
            bool match = true;

            for (int i = 0; i < 26; i++) {
                if (freq1[i] != freq2[i]) {
                    match = false;
                    break;
                }
            }

            if (match)
                return true;

            // If this is the last window, stop
            if (right == s2.size() - 1)
                break;

            // Slide the window
            freq2[s2[left] - 'a']--;
            left++;

            right++;
            freq2[s2[right] - 'a']++;
        }

        return false;
    }
};