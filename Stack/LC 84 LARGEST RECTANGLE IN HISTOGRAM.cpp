class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> index_stack;
        int n = heights.size();
        int max_area = 0;

        for(int i = 0 ; i <= n ; i++)
        {
            int curr_height = i==n ? 0 : heights[i];

            while(!index_stack.empty() && curr_height < heights[index_stack.top()])
            {
                int h = heights[index_stack.top()];
                index_stack.pop();
                int width = index_stack.empty() ? i : i - index_stack.top() - 1;
                max_area = max(max_area, h * width);
            }
            index_stack.push(i);
            
        }
        return max_area;
    }
};