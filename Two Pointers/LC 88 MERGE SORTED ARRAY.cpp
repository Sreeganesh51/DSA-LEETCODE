class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {   

      int f = m-1 , s = n-1;
      for(int i = m+n-1 ; s >= 0 ; i--)
      {
         if( f >= 0 && nums1[f] > nums2[s])
         {
         nums1[i] = nums1[f];
         f--;
         }
         else
         {
         nums1[i] = nums2[s];
         s--;
         }

      }
      
    }
};