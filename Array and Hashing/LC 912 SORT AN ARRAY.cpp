class Solution {
public:

       void merge(vector<int>&nums,int left,int mid,int right)
       {
        int i=left,j=mid+1;
        vector<int> temp;
        while(i<=mid && j<=right)
        {
            if(nums[i]<=nums[j])
            {
                temp.push_back(nums[i]);
                i++;
            }
            else
            {
                temp.push_back(nums[j]);
                j++;
            }
        }

        while(j<=right){
        temp.push_back(nums[j]);
        j++;
        }

        while(i<=mid){
        temp.push_back(nums[i]);
        i++;
        }

      for(int k = 0;k<temp.size();k++)
      {
        nums[left+k]=temp[k];
      }

        
       }
       
       void merge_sort(vector<int>&nums,int left,int right)
       {
        if(left>=right)                                       //BASE CASE
        return;
            
        int mid = left+(right-left)/2;
                                                           
        merge_sort(nums,left,mid);                               //RECURSION
        merge_sort(nums,mid+1,right);
        
        merge(nums,left,mid,right);
       }

    vector<int> sortArray(vector<int>& nums) {
       merge_sort(nums,0,nums.size()-1);
       return nums;
    }
};