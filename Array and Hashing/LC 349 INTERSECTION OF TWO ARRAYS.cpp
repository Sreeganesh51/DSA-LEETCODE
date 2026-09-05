class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        unordered_set<int> st;            // CREATING A SET

        for(int x : nums1)                  //MAKING NUMS1 TO A SET
        st.insert(x);

        vector<int> result;               //CREATING A RESULT VECTOR OF INTEGERS

        for(int x : nums2)                 //TRAVERSE THROUGH EVERY ELEMENT IN NUMS2
        {
            if(st.count(x))              //IF ELEMENT EXISTS IN SET 
            {
                result.push_back(x);     //ADD ELEMENT TO RESULT
                st.erase(x);             //REMOVE ELEMENT FROM SET
            }
        }

        return result;
    }
};