class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
     vector<bool> values(nums.size()+2 , false);

     for(int num : nums)
     if(num>0 && num <= nums.size())
     values[num]=true;

     for(int i = 1; i <= nums.size() ; i++)
     if(values[i]==false)
     return i;

     return nums.size()+1;

     
    }
};