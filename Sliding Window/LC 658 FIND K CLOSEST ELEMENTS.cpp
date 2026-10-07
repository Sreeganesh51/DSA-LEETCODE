class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int left = 0;
    

        while(left < arr.size() - k) //left goes upto all possible window shifts
        {

            if(x - arr[left]  > arr[left+k] - x)
            left++;
            else
            break;
        }

        vector<int> ans;

        for(int i = 0 ; i < k ; i++)
        {
        ans.push_back(arr[left]);
        left++;
        }
    

        return ans;
    }
};