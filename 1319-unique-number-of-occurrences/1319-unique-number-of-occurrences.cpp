class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> occur;
        for (auto it : arr) {
            occur[it]++;
        }
        unordered_set<int> st;
        for (auto it : occur) {
            int freq = it.second;
            if (st.find(freq) != st.end()) {
                return false;
            }
            st.insert(freq);
        }
        return true;
    }
};