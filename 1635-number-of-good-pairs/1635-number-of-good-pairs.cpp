class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n = nums.size();
        int result = 0;
        unordered_map<int, int> mp;
        for (auto& it : nums) {
            result = result + mp[it];
            mp[it]++;
        }
        return result;
    }
};