class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {

        sort(people.begin(), people.end());

        int left = 0;
        int right = people.size() - 1;
        int boats = 0;

        while (left < right) {
            int sum = people[left] + people[right];

            if (sum <= limit) {
                boats++;
                right--;
                left++;
            }

            else {
                boats++;
                right--;
            }

            if(left == right)
            boats++;
        }

        return boats;
    }
};