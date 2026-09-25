class Solution {
public:
    void rotate(vector<int>& nums, int k) {

         int n = nums.size();

         if(n==0)
         return;

         int left = 0 ; 
         int right = n-1;

         k %= n; //unnecessary rotations removed

         while(left < right)
         {
            int temp = nums[left];
            nums[left] = nums[right];
            nums[right] = temp;
             
            left++;
            right--;
         }

         left = 0;
         right = k-1;

         while(left < right)
         {
            int temp = nums[left];
            nums[left] = nums[right];
            nums[right] = temp;

            left++;
            right--;
         }

         left = k;
         right = n-1;

         while(left < right)
         {
            int temp = nums[left];
            nums[left] = nums[right];
            nums[right]= temp;

            left++;
            right--;
         }
         

    }
};