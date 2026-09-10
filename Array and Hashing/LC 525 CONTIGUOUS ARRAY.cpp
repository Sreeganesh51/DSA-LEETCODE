class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int> mp;
        mp[0]=-1;
         
        int sum=0;
        int maxLength=0;
        for(int i = 0 ; i <nums.size() ; i++)
        {
            if(nums[i]==0)
            sum-=1;
            else
            sum+=1;

            if(mp.find(sum)!=mp.end()){
            int length = i - mp[sum];
            maxLength = max(maxLength,length);
            }
            else
            mp[sum]=i;
        }

        return maxLength;
        

    }
};