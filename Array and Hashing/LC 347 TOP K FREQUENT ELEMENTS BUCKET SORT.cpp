class Solution {
public:
     
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int , int > freq;
        for(int x:nums)
        freq[x]++;

        vector<vector<int>> bucket(nums.size() + 1);

        for(auto& pair:freq)
        bucket[pair.second].push_back(pair.first);
        
        vector<int> result;

        for(int i= nums.size(); i>=1 ; i--)
        {
            if(result.size() == k)
            break;

            for(int j:bucket[i])
            {
            result.push_back(j);
            if(result.size() == k)
            break;
            }
        }

        return result;
         




    }
};