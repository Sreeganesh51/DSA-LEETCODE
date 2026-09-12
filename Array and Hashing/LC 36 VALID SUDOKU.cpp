class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char> rows[9];
        unordered_set<char> cols[9];
        unordered_set<char> boxes[9];

        for(int i = 0 ; i < 9 ; i++)
        for(int j = 0 ; j<9 ; j++)
        {
            char num = board[i][j];

            if(num == '.')
            continue;

            if(rows[i].find(num)!=rows[i].end() || cols[j].find(num)!=cols[j].end())
            return false;

            else
            {
            rows[i].insert(num);
            cols[j].insert(num);
            }

            int box_index = (i/3) * 3 + (j/3);

            if(boxes[box_index].find(num)!=boxes[box_index].end())
            return false;
            else
            boxes[box_index].insert(num);

        }

        return true;
    }
};