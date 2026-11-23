class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = speed.size(); // NO of cars

        vector<pair<int, int>> cars;

        for (int i = 0; i < n; i++) {
            cars.push_back({position[i], speed[i]});
        }

        sort(cars.rbegin(), cars.rend()); // SORTING CARS BY POSITION
        stack<float> st;

        for (int i = 0; i < n; i++) {
            float time = float((target - cars[i].first)) / cars[i].second;
            if (st.empty() || time > st.top()) {
                st.push(time);
            }
        }

        return st.size();
    }
};