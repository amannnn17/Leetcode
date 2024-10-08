class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        set<vector<int>>s;
        vector<vector<int>>output;
        for(int i=0;i<n-1;i++){
            int low=i+1,high=n-1;
            while(low<high){
                if(nums[i]+nums[low]+nums[high]<0) low++;
                else if(nums[i]+nums[low]+nums[high]>0) high--;
                else {
                    s.insert({nums[i],nums[low],nums[high]});
                    low++;
                    high--;
                }
            }
        }
        for(auto it:s){
           output.push_back(it);
        }
        return output;
    }
};