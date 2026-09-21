class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i = 0 ;

        string ans;

        int l1 = word1.length();
        int l2 = word2.length();

        while(i < l1 || i < l2)
        {
            if(i < l1)
            ans.push_back(word1[i]);
            if( i < l2)
            ans.push_back(word2[i]);

            i++;
        }
        return ans;
    }
};