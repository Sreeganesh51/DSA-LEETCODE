class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix ="";
         
        for(int i=0;i<strs[0].size();i++)      //charachter traversal
        {
        for(int j=0;j<strs.size();j++)//word traversal
        {
             if( i >= strs[j].size())
            return prefix;

            if(strs[j][i] != strs[0][i])//comparing every char of all words
            return prefix;
           

            
        }
          prefix +=strs[0][i];
        }
        return prefix;
    }
    
};