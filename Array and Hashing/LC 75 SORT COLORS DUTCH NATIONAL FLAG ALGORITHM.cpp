class Solution {
public:
    void sortColors(vector<int>& nums) {
        //DUTCH NATIONAL FLAG ALGORITHM(THREE POINTERS)
        int first=0 , mid=0 , third=nums.size()-1;

        while(mid<=third)
        {
            if(nums[mid]==0){
            std::swap(nums[mid],nums[first]);
            first++;
            mid++;
            }

            else if(nums[mid]==1)
            mid++;

            else{
                std::swap(nums[mid],nums[third]);
                third--;
            }
        }

        

    }
};