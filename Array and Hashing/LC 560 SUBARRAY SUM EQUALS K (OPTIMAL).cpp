class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
     unordered_map<int,int> frequencies;

     frequencies[0]=1;

     int sum=0;
     int count=0;

     for(int num:nums)
     {
        sum+=num;

        if(frequencies.find(sum-k)!=frequencies.end())
        count+=frequencies[sum-k];

        frequencies[sum]++;
     }

     return count;

    }
};