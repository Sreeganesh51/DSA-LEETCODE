class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int left = 0;
        int subarray_count = 0;
        int product = 1;

        for (int right = 0; right < nums.size(); right++) {
            product *= nums[right];

            while (left <= right && product >= k) {
                product /= nums[left];
                left++;
            }

            subarray_count += (right - left + 1);
        }
        return subarray_count;
    }
};