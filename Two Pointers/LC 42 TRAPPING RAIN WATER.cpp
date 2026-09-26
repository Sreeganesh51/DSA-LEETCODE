class Solution {
public:
    int trap(vector<int>& height) {
        
        int n = height.size();
        int water = 0;

        vector<int> rightmax(n,-1);
        vector<int>leftmax(n,-1);

        leftmax[0] = height[0];
        rightmax[n-1] = height[n-1];
        
        for(int i = 1  ;  i < height.size() ; i++)
        {
          if(leftmax[i-1] > height[i])
          leftmax[i] = leftmax[i-1];

          else
          leftmax[i] = height[i];
        }

        for(int i = n-2  ;  i >= 0 ; i--)
        {
          if(rightmax[i+1] > height[i])
          rightmax[i] = rightmax[i+1];

          else
          rightmax[i] = height[i];
        }

        for(int i = 0 ; i < n ; i++)
        {
            water += min(rightmax[i] , leftmax[i]) - height[i];
        }

        return water;

    }
};