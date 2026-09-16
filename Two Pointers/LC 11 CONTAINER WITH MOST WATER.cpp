class Solution {
public:
    int maxArea(vector<int>& height) {
       int right = height.size() - 1;
       int left = 0;
       int max_area = 0;

       for(int i = 0 ; i<height.size() ; i++)
       {

        int area = (right-left) * min(height[right],height[left]);
        
        if(height[left]>height[right])
        right--;
        else
        left++;

        if(area>max_area)
        max_area = area;

       }

       return max_area;
    }
};