class Solution {
public:
     
   static bool compare(pair<int,int> a , pair<int,int> b)
    {
        return a.second > b.second;
    }

    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;     //CREATE A HASHMAP

        for(int x:nums)     //STORE FREQUENCIES IN HASHMAP
        mp[x]++;

        vector<pair<int,int>> elements; //CREATE A VECTOR OF PAIRS... FOR SORTING
        
        for(auto& pair:mp)
        elements.push_back({pair.first,pair.second}); //STORING THE PAIRS IN VECTOR OF PAIRS

        sort(elements.begin(), elements.end() , compare);//SORTING THE VECTOR OF PAIRS
        
        vector<int> result;

        for(int i =0 ; i<k ;i++)
        result.push_back(elements[i].first); 

        return result;



    }
};