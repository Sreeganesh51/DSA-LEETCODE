class Solution {
public:

    bool check_remaining_palindrome(const string& s , int L , int R)
    {
        while(L<=R)
        {
            if (s[L]==s[R])
            {
            L++;
            R--;
            }
            else
            return false;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int left = 0 ;
        int right = s.size() - 1;


        while(left <=right)
        {
            if(s[left]==s[right])
            {
                left++;
                right--;
            }
            else
            {
              if(check_remaining_palindrome(s,left+1,right))
              return true;
              else if(check_remaining_palindrome(s,left,right-1))
              return true;
              else
              return false;
            }
        }
     return true;

    }
};